#include <stdio.h>
/**
 * main - a program that prints all the numbers of base 16 in lowercase, followed by a new line.
 * You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
 *
 * Return: 0 success
 */

int main(void)
{
	int n;
	char letter;

	for (n = 0; n < 10; n++)
	{
		putchar((n % 10) + '0');
	}

	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
