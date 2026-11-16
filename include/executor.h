#ifndef EXECUTOR_H
#define EXECUTOR_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#include <sys/wait.h>

void execute_builtin(const char *input);
void execute_command(char *const args[]);

#endif
