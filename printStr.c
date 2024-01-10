#include "shell.h"

/**
 * _putchar - function that writes character to stdout
 * @c: character to be printed
 * Return: character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _printstr - function that prints character strings
 * @str: character pointer pointing char
 * Return: character string
 */
void _printstr(const char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
		_putchar(str[a]);
}
