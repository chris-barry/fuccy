/* This code was auto-generated using Fuccy 
 * (https://github.com/chris-barry/fuccy). 
 * This software is still alpha, 
 * so be wary of its output. 
 */

#include "examples/my.h"
int main()
{
	my_char('a');

	write(0, NULL, 0);
	write(0, NULL, -1);
	write(0, NULL, 1);
	write(0, NULL, ~(1 << ((sizeof(int) * 8) - 1)));
	write(0, NULL, 1 << ((sizeof(int) * 8) - 1));
	write(0, "", 0);
	write(0, "", -1);
	write(0, "", 1);
	write(0, "", ~(1 << ((sizeof(int) * 8) - 1)));
	write(0, "", 1 << ((sizeof(int) * 8) - 1));
	write(-1, NULL, 0);
	write(-1, NULL, -1);
	write(-1, NULL, 1);
	write(-1, NULL, ~(1 << ((sizeof(int) * 8) - 1)));
	write(-1, NULL, 1 << ((sizeof(int) * 8) - 1));
	write(-1, "", 0);
	write(-1, "", -1);
	write(-1, "", 1);
	write(-1, "", ~(1 << ((sizeof(int) * 8) - 1)));
	write(-1, "", 1 << ((sizeof(int) * 8) - 1));
	write(1, NULL, 0);
	write(1, NULL, -1);
	write(1, NULL, 1);
	write(1, NULL, ~(1 << ((sizeof(int) * 8) - 1)));
	write(1, NULL, 1 << ((sizeof(int) * 8) - 1));
	write(1, "", 0);
	write(1, "", -1);
	write(1, "", 1);
	write(1, "", ~(1 << ((sizeof(int) * 8) - 1)));
	write(1, "", 1 << ((sizeof(int) * 8) - 1));
	write(~(1 << ((sizeof(int) * 8) - 1)), NULL, 0);
	write(~(1 << ((sizeof(int) * 8) - 1)), NULL, -1);
	write(~(1 << ((sizeof(int) * 8) - 1)), NULL, 1);
	write(~(1 << ((sizeof(int) * 8) - 1)), NULL, ~(1 << ((sizeof(int) * 8) - 1)));
	write(~(1 << ((sizeof(int) * 8) - 1)), NULL, 1 << ((sizeof(int) * 8) - 1));
	write(~(1 << ((sizeof(int) * 8) - 1)), "", 0);
	write(~(1 << ((sizeof(int) * 8) - 1)), "", -1);
	write(~(1 << ((sizeof(int) * 8) - 1)), "", 1);
	write(~(1 << ((sizeof(int) * 8) - 1)), "", ~(1 << ((sizeof(int) * 8) - 1)));
	write(~(1 << ((sizeof(int) * 8) - 1)), "", 1 << ((sizeof(int) * 8) - 1));
	write(1 << ((sizeof(int) * 8) - 1), NULL, 0);
	write(1 << ((sizeof(int) * 8) - 1), NULL, -1);
	write(1 << ((sizeof(int) * 8) - 1), NULL, 1);
	write(1 << ((sizeof(int) * 8) - 1), NULL, ~(1 << ((sizeof(int) * 8) - 1)));
	write(1 << ((sizeof(int) * 8) - 1), NULL, 1 << ((sizeof(int) * 8) - 1));
	write(1 << ((sizeof(int) * 8) - 1), "", 0);
	write(1 << ((sizeof(int) * 8) - 1), "", -1);
	write(1 << ((sizeof(int) * 8) - 1), "", 1);
	write(1 << ((sizeof(int) * 8) - 1), "", ~(1 << ((sizeof(int) * 8) - 1)));
	write(1 << ((sizeof(int) * 8) - 1), "", 1 << ((sizeof(int) * 8) - 1));

	xmalloc(0);
	xmalloc(-1);
	xmalloc(1);
	xmalloc(~(1 << ((sizeof(int) * 8) - 1)));
	xmalloc(1 << ((sizeof(int) * 8) - 1));

	exit(0);
	exit(-1);
	exit(1);
	exit(~(1 << ((sizeof(int) * 8) - 1)));
	exit(1 << ((sizeof(int) * 8) - 1));

	my_str(NULL);
	my_str("");

	my_error(NULL);
	my_error("");

	my_int(0);
	my_int(-1);
	my_int(1);
	my_int(~(1 << ((sizeof(int) * 8) - 1)));
	my_int(1 << ((sizeof(int) * 8) - 1));

	my_num_base(0, NULL);
	my_num_base(0, "");
	my_num_base(-1, NULL);
	my_num_base(-1, "");
	my_num_base(1, NULL);
	my_num_base(1, "");
	my_num_base(~(1 << ((sizeof(int) * 8) - 1)), NULL);
	my_num_base(~(1 << ((sizeof(int) * 8) - 1)), "");
	my_num_base(1 << ((sizeof(int) * 8) - 1), NULL);
	my_num_base(1 << ((sizeof(int) * 8) - 1), "");

	my_alpha();

	my_digits();

	my_strlen(NULL);
	my_strlen("");

	my_strindex(NULL, 'a');
	my_strindex("", 'a');

	my_strrindex(NULL, 'a');
	my_strrindex("", 'a');

	my_strdup(NULL);
	my_strdup("");

	my_revstr(NULL);
	my_revstr("");

	my_strcpy(NULL, NULL);
	my_strcpy(NULL, "");
	my_strcpy("", NULL);
	my_strcpy("", "");

	my_strncpy(NULL, NULL, 0);
	my_strncpy(NULL, NULL, -1);
	my_strncpy(NULL, NULL, 1);
	my_strncpy(NULL, NULL, ~(1 << ((sizeof(int) * 8) - 1)));
	my_strncpy(NULL, NULL, 1 << ((sizeof(int) * 8) - 1));
	my_strncpy(NULL, "", 0);
	my_strncpy(NULL, "", -1);
	my_strncpy(NULL, "", 1);
	my_strncpy(NULL, "", ~(1 << ((sizeof(int) * 8) - 1)));
	my_strncpy(NULL, "", 1 << ((sizeof(int) * 8) - 1));
	my_strncpy("", NULL, 0);
	my_strncpy("", NULL, -1);
	my_strncpy("", NULL, 1);
	my_strncpy("", NULL, ~(1 << ((sizeof(int) * 8) - 1)));
	my_strncpy("", NULL, 1 << ((sizeof(int) * 8) - 1));
	my_strncpy("", "", 0);
	my_strncpy("", "", -1);
	my_strncpy("", "", 1);
	my_strncpy("", "", ~(1 << ((sizeof(int) * 8) - 1)));
	my_strncpy("", "", 1 << ((sizeof(int) * 8) - 1));

	my_strcmp(NULL, NULL);
	my_strcmp(NULL, "");
	my_strcmp("", NULL);
	my_strcmp("", "");

	my_strncmp(NULL, NULL, 0);
	my_strncmp(NULL, NULL, -1);
	my_strncmp(NULL, NULL, 1);
	my_strncmp(NULL, NULL, ~(1 << ((sizeof(int) * 8) - 1)));
	my_strncmp(NULL, NULL, 1 << ((sizeof(int) * 8) - 1));
	my_strncmp(NULL, "", 0);
	my_strncmp(NULL, "", -1);
	my_strncmp(NULL, "", 1);
	my_strncmp(NULL, "", ~(1 << ((sizeof(int) * 8) - 1)));
	my_strncmp(NULL, "", 1 << ((sizeof(int) * 8) - 1));
	my_strncmp("", NULL, 0);
	my_strncmp("", NULL, -1);
	my_strncmp("", NULL, 1);
	my_strncmp("", NULL, ~(1 << ((sizeof(int) * 8) - 1)));
	my_strncmp("", NULL, 1 << ((sizeof(int) * 8) - 1));
	my_strncmp("", "", 0);
	my_strncmp("", "", -1);
	my_strncmp("", "", 1);
	my_strncmp("", "", ~(1 << ((sizeof(int) * 8) - 1)));
	my_strncmp("", "", 1 << ((sizeof(int) * 8) - 1));

	my_strcat(NULL, NULL);
	my_strcat(NULL, "");
	my_strcat("", NULL);
	my_strcat("", "");

	my_strconcat(NULL, NULL);
	my_strconcat(NULL, "");
	my_strconcat("", NULL);
	my_strconcat("", "");

	my_strnconcat(NULL, NULL, 0);
	my_strnconcat(NULL, NULL, -1);
	my_strnconcat(NULL, NULL, 1);
	my_strnconcat(NULL, NULL, ~(1 << ((sizeof(int) * 8) - 1)));
	my_strnconcat(NULL, NULL, 1 << ((sizeof(int) * 8) - 1));
	my_strnconcat(NULL, "", 0);
	my_strnconcat(NULL, "", -1);
	my_strnconcat(NULL, "", 1);
	my_strnconcat(NULL, "", ~(1 << ((sizeof(int) * 8) - 1)));
	my_strnconcat(NULL, "", 1 << ((sizeof(int) * 8) - 1));
	my_strnconcat("", NULL, 0);
	my_strnconcat("", NULL, -1);
	my_strnconcat("", NULL, 1);
	my_strnconcat("", NULL, ~(1 << ((sizeof(int) * 8) - 1)));
	my_strnconcat("", NULL, 1 << ((sizeof(int) * 8) - 1));
	my_strnconcat("", "", 0);
	my_strnconcat("", "", -1);
	my_strnconcat("", "", 1);
	my_strnconcat("", "", ~(1 << ((sizeof(int) * 8) - 1)));
	my_strnconcat("", "", 1 << ((sizeof(int) * 8) - 1));

	my_stdstrnconcat(NULL, NULL, 0);
	my_stdstrnconcat(NULL, NULL, -1);
	my_stdstrnconcat(NULL, NULL, 1);
	my_stdstrnconcat(NULL, NULL, ~(1 << ((sizeof(int) * 8) - 1)));
	my_stdstrnconcat(NULL, NULL, 1 << ((sizeof(int) * 8) - 1));
	my_stdstrnconcat(NULL, "", 0);
	my_stdstrnconcat(NULL, "", -1);
	my_stdstrnconcat(NULL, "", 1);
	my_stdstrnconcat(NULL, "", ~(1 << ((sizeof(int) * 8) - 1)));
	my_stdstrnconcat(NULL, "", 1 << ((sizeof(int) * 8) - 1));
	my_stdstrnconcat("", NULL, 0);
	my_stdstrnconcat("", NULL, -1);
	my_stdstrnconcat("", NULL, 1);
	my_stdstrnconcat("", NULL, ~(1 << ((sizeof(int) * 8) - 1)));
	my_stdstrnconcat("", NULL, 1 << ((sizeof(int) * 8) - 1));
	my_stdstrnconcat("", "", 0);
	my_stdstrnconcat("", "", -1);
	my_stdstrnconcat("", "", 1);
	my_stdstrnconcat("", "", ~(1 << ((sizeof(int) * 8) - 1)));
	my_stdstrnconcat("", "", 1 << ((sizeof(int) * 8) - 1));

	my_strpos(NULL, 'a');
	my_strpos("", 'a');

	my_strrpos(NULL, 'a');
	my_strrpos("", 'a');


}

