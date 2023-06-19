#include <stdio.h>
/**
 * main - a program that prints the lowercase alphabet in reverse, followed by a new line.
 * You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
 *
 * Return: 0 success
 */

int main(void)
{
	char letter;
	
	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
