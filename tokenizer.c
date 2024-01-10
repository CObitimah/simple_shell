#include "shell.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_token - function that tokenize a giving string
 * @s: input string to be tokenized
 * @delim: character used to  tokenize
 * Return: tokens
 */
char **string_token(char *s, char *delim)
{
	char *token, *temp, **arr;
	int len;

	temp = strdup(s);
	if (temp == NULL)
		return (NULL);
	token = strtok(temp, delim);
	len = 0;
	while (token != NULL)
	{
		++len;
		token = strtok(NULL, delim);
	}
	arr = malloc(sizeof(char *) * (len + 1));
	if (arr == NULL)
	{
		free(temp);
		return (NULL);
	}
	token = strtok(s, delim);
	len = 0;
	while (token != NULL)
	{
		arr[len] = strdup(token);
		if (arr[len] == NULL)
		{
			free_array(arr);
			return (NULL);
		}
		token = strtok(NULL, delim);
		++len;
	}
	free(temp);
	arr[len] = NULL;
	return (arr);
}
