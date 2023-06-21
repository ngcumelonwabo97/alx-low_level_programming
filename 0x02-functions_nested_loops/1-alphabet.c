#include <stdio.h>
/**
 * main - a function that prints the alphabet, in lowercase,
 * followed by a new line.
 * You can only use _putchar twice in your code
 * Return: 0 (success)
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	putchar('\n');
}
