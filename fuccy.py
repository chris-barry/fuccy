#!/usr/bin/env python
# -*- coding: utf-8 -*-

""" fuccer.py: Break your C code. """

import re
import argparse
import sys

# TODO handle comments
# TODO handle types with two words, such as "unsigned int"

""" Values for ints """
ZERO = "0"
MAX_INT = "~(1 << ((sizeof(int) * 8) - 1))"
MIN_INT = "1 << ((sizeof(int) * 8) - 1)"
POSITIVE_INT = "1"
NEGATIVE_INT = "-1"

""" Values for pointers """
NULL = "NULL"

""" Values for char* """
EMPTY_STR = "\"\""

""" Values for chars """
BAD_CHAR = "\'a\'"

""" Value for when it is not known """
UNKNOWN = "unknown"

def type_solver(arg, s, pos=0):
	""" Tries to output all the possible output for a series of args """
	if pos >= len(arg):
		s += ");\n"
		sys.stdout.write(s)
		return

	if pos > 0:
		''.join([s, ", "])
		s += ", "
	
	if arg[pos] == "int" or arg[pos] == "pid_t":
		int_solver(arg, s, pos + 1)
	elif isPointer(arg[pos]):
		pointer_solver(arg, s, pos + 1)
	elif arg[pos] == "char":
		char_solver(arg, s, pos + 1)
	elif arg[pos] == "":
		type_solver(arg, s, pos + 1)
	else:
		unknown_solver(arg, s, pos + 1)

def int_solver(arg, s, pos):
	""" Adds the possible bad input for ints """
	type_solver(arg, ''.join([s, ZERO]), pos)
	type_solver(arg, ''.join([s, NEGATIVE_INT]), pos)
	type_solver(arg, ''.join([s, POSITIVE_INT]), pos)
	type_solver(arg, ''.join([s, MAX_INT]), pos)
	type_solver(arg, ''.join([s, MIN_INT]), pos)

def pointer_solver(arg, s, pos):
	""" Adds the possible bad input for any pointer """
	type_solver(arg, ''.join([s, NULL]), pos)
	type_solver(arg, ''.join([s, EMPTY_STR]), pos)

def char_solver(arg, s, pos):
	type_solver(arg, ''.join([s, BAD_CHAR]), pos)

def unknown_solver(arg, s, pos):
	""" Outputs variables for an unknown type """
	type_solver(arg, ''.join([s, UNKNOWN]), pos)

def isPointer(arg):
	"""
	Determines if a string is likely to be a pointer

	>>> isPointer('char*')
	True
	>>> isPointer('foo')
	False
	"""
	return "*" in arg

def clean_line(line):
	"""
	Cleans a definition line.

	>>> clean_line("void foo(int, char, int);")
	['void', 'foo', 'int', 'char', 'int']
	"""
	line = line.strip()
	line = line.replace('(', ' ')
	line = line.replace(')', ' ')
	line = line.replace(',', '')
	line = line.replace(';', '')
	line = line.replace('\\n', '')
	# line[0] = return type
	# line[1] = function name
	# line[2 ... n] = arguments

	line = re.split(' ', line, maxsplit=0, flags=0)

	return line

def main():
	# http://docs.python.org/2/library/argparse.html#module-argparse
	parser = argparse.ArgumentParser(description='Break your C.')
	parser.add_argument('header', metavar='header.h', type=str,
					   help='Header file describing your library')

	args = parser.parse_args()

	code = open(args.header)

	isComment = False

	sys.stdout.write(
	"/* This code was auto-generated using Fuccy \n" + 
	" * (https://github.com/chris-barry/fuccy). \n" +
	" * This software is still alpha, \n" +
	" * so be wary of its output. \n" + 
	" */\n\n")

	sys.stdout.write("#include \"" + args.header + "\"\n")
	sys.stdout.write("int main()\n{\n")

	for line in code:
		line = clean_line(line)

		# This will hopefully detect C style comments
		if "/*" in line:
			isComment = True
		if "*/" in line:
			isComment = False
		if isComment:
			continue

		type_solver(line[2:-1], '\t' + line[1] + '(')
		sys.stdout.write('\n')

	sys.stdout.write("\n}\n\n")

if __name__ == "__main__":
    main()
