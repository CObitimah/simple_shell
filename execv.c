#include "shell.h"

/**
 * validate - check if a given number exist and execute
 * @args: string arrays containing the command its arguments
 * @line: input strings buffer
 * Return: 0 (success)
 */
int validate(char **args, char *line)
{
	int cmd_status;
	char *path;
	struct stat status;

	if (stat(args[0], &status) == 0)
		cmd_status = execute_cmd(args, line);
	else
	{
		path = handle_path(args[0]);
		if (path != NULL)
		{
			free(args[0]);
			args[0] = path;
			cmd_status = execute_cmd(args, line);
		}
		else
		{
			free_array(args);
			return (127);
		}
	}
	free_array(args);
	return (cmd_status);
}

/**
 * execute_cmd - function that executes a command
 * @args: string array containing the and its arguments
 * @line: input string buffer
 * Return: 0 (success)
 */
int execute_cmd(char **args, __attribute__((unused)) char *line)
{
	int it;

	it = 0;
	switch (fork())
	{
		case -1:
			perror("Error\n");
			break;
		case 0:
			execve(args[0], args, environ);
			exit(0);
		default:
			wait(NULL);
			break;
	}
	return (it);
}
