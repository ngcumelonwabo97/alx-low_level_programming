#include "main.h"

/**
 * _puts - A function that prints a string
 * followed by a new line to stdout
 *
 * @str: string to be printed
 * Return: string
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
