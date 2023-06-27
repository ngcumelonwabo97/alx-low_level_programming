#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse
 * followed by a new line.
 * @s: the used string to reference a pointer
 * Rturn: 0 success
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
