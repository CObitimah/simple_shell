#include "shell.h"

/**
 * _strncat - this function concatenates two strings
 * @dest: string destination
 * @src: string source
 * @n: number of nytes to append
 * Return: pointer to destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	b = 0;
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
 * _strncpy - this function copies n bytes of a string
 * @dest: string destination
 * @src: string source
 * @n: number of bytes to be copied
 * Return: zero
 */

char *_strncpy(char *dest, char *src, int n)
{
	int z;

	z = 0;
	for (z = 0; z < n && src[z] != '\0'; z++)
		dest[z] = src[z];
	for (; n > z; z++)
		dest[z] = '\0';
	return (dest);
}

/**
 * _strcpy - this function copies the string pointed
 * to by src
 * @dest: string destination
 * @src: string source
 * Return: zero
 */

char *_strcpy(char *dest, char *src)
{
	int len;
	int b;

	len = 0;
	b = 0;
	while (src[len] != '\0')
		len++;
	for (b = 0; b < len; b++)
		dest[b] = src[b];
	dest[b] = '\0';
	return (dest);
}

/**
 * _strcat - this function concatenates two strings
 * @dest: string destination
 * @src: string source
 * Return: zero
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int x;

	a = 0;
	x = 0;
	while (dest[a] != '\0')
		a++;
	for (x = 0; src[x] != '\0'; x++)
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
