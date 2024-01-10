#include "shell.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: string destination
 * @src: string source
 * @n: number of bytes to append
 * Return: pointer to destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	for (b = 0; src[b] != '\0' && n > 0; b++, b--, a++)
	{
		dest[a] = src[b];
	}
	return (dest);
}

/**
 * _strncpy - function that copies n bytes of a string
 * @dest: string destination
 * @src: string source
 * @n: number of bytes to copy
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int z;

	for (z = 0; z < n && src[z] != '\0'; z++)
		dest[z] = src[z];

	for (; n > z; z++)
		dest[z] = '\0';
	return (dest);
}

/**
 * _strcpy - function that copies the string pointed to by src
 * @dest: string destination
 * @src: string source
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int len, b;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	for (b = 0; b < len; b++)
	{
		dest[b] = src[b];
	}
	dest[b] = '\0';
	return (dest);
}

/**
 * _strcat - function that concatenates two strings
 * @dest: string destination
 * @src: string source
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int a, x;

	a = 0;
	while (dest[a] != '\0')
		a++;
	for (x = 0; src[x] != '\0'; x++)
	{
		dest[a] = src[x];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
