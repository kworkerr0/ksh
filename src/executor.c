#include "executor.h"

void execute_builtin(const char *input)
{
	if (strcmp(input, "exit") == 0)
		exit(0);
}

void execute_command(char *const args[])
{
	pid_t command = fork();

	if (command == 0)
	{
		execvp(args[0], args);

		printf("ksh: %s: no such file or directory\n", args[0]);
		_exit(127);
	}
	else if (command > 0)
		waitpid(command, NULL, 0);	
}
