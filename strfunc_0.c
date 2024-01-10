#include "shell.h"

/**
 * _strncmp - function that compares two strings
 * @s1: first string input to be compared
 * @s2: second string input to be compared
 * @n: number of characters to be compared
 * Return: 0 if strings are equal n, else 1
 */
int _strncmp(const char *s1, const char *s2, size_t n)
{
	size_t x;

	for (x = 0; (s1[x] != '\0' || s2[x] != '\0') && x < n; x++)
	{
		if (s1[x] != s2[x])
			return (s1[x] - s2[x]);
	}
	return (0);
}

/**
 * _strcmp - function that compares two strings
 * @s1: first string input
 * @s2: second string input
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int y;

	for (y = 0; s1[y] != '\0' || s2[y] != '\0'; y++)
	{
		if (s1[y] != s2[y])
			return (s1[y] - s2[y]);
	}
	return (0);
}

/**
 * _strlen - function that returns the length of a string
 * @s: stirng variable
 * Return: 0
 */
int _strlen(char *s)
{
	int z;

	for (z = 0; s[z] != '\0'; z++)
		;
	return (z);
}

/**
 * _strdup - function that duplicates a string
 * @str: string to duplicate
 * Return: pointer to string duplicated
 */
char *_strdup(const char *str)
{
	int length = 0;
	char *ren;

	if (str == NULL)
		return (NULL);
	while (*str++)
		length++;

	ren = malloc(sizeof(char) * (length + 1));
	if (!ren)
		return (NULL);
	for (length++; length--;)
		ren[length] = *--str;
	return (ren);
}
