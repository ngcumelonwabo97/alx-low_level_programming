#include "main.h"
/**
 * void print_alphabet_x10(void) - a function that prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 * You can only use _putchar twice in your code
 *
 * Return: 0 (success)
 */

void print_alphabet_x10(void)
{
	char c;
	int n;

	for (n = 0; n <= 10; n++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
