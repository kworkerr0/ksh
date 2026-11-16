#include "parser.h"

void parse_input(char *input, char *args[], int *idx)
{
	fgets(input, INPUT_SIZE, stdin);
	input[strcspn(input, "\n")] = '\0';

	char *token = strtok(input, " ");
	while (token != NULL)
	{
		args[(*idx)++] = token;
		token = strtok(NULL, " ");
	}

	args[*idx] = NULL;
}
