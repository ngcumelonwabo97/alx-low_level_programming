#include "main.h"

/**
 * print_rev - A function that prints a string
 * in reverse, followed by a new line.
 * @s: A string variable
 *
 * Return: Always 0
 */

void print_rev(char *s)
{
	int length = 0;
	int i;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	s--;

	for (i = length; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
