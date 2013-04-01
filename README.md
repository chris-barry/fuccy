# Fuccy
Fuccy is a Python script that tries to output C code that will test if your program is ready for bad input.
The goal is to make sure that no matter how bad the input is that the program will not crash.
The program can only be considered successful if it can run the output of `fuccy.py` and not crash.

# Limitations / TODO
* Currently types such as, `unsigned int` will not work.
* Breaks when there are comments in code
* Poorly handles malformed code

# Example
`python fuccy.py examples/my.h > examples/my.c`
