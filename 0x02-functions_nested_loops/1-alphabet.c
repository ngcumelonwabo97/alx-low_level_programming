#include <stdio.h>
/**
 * main - a function that prints the alphabet, in lowercase,
 * followed by a new line.
 * You can only use _putchar twice in your code
 *
 * Return: 0 (success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}
