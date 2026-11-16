#include <stdio.h>

#include "executor.h"
#include "parser.h"

int main(void)
{
	while(1)
	{
		char input[INPUT_SIZE] = {0};
		char *args[INPUT_SIZE] = {0};
		int i = 0;

		printf("$ ");
		fflush(stdout);
		parse_input(input, args, &i);
		execute_builtin(input);
		execute_command(args);
	}
}
