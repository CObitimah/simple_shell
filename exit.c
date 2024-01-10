#include "shell.h"

/**
 * free_array - frees an array
 * @args: pointer array
 */
void free_array(char **args)
{
	int a;

	if (args)
	{
		for (a = 0; args[a]; a++)
			free(args[a]);
		free(args);
	}
}

/**
 * Exit_Command - function to handle the exit builtin command
 * @cmd: command input by the user
 * @line: command input buffer
 * @status: command status
 * Return: exit status
 */
int Exit_Command(char **cmd, char *line, int status)
{
	int exitStatus, a;

	if (cmd[1] == NULL)
	{
		free_array(cmd);
		free(line);
		exit(status);
	}
	for (a = 0; cmd[1][a]; a++)
	{
		if (isdigit(cmd[1][a]) == 0)
		{
			free_array(cmd);
			return (1);
		}
	}
	exitStatus = _atoi(cmd[1]);
	free_array(cmd);
	free(line);
	exit(exitStatus);
}
