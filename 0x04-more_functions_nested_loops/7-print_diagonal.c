#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: the number of times the character \ should be printed
 * Return: always 0
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
