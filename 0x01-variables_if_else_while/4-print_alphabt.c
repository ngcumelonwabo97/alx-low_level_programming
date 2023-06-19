#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase,
 * followed by a new line.
 * Print all the letters except q and e
 *
 * Return: 0 success
 */

int main(void)
{
	int lowerCase = 'a';

	while (lowerCase <= 'z')
	{
		if (lowerCase == 'e' || lowerCase == 'q')
		{
			lowerCase++;
		}

		else
		{
			putchar(lowerCase);
			lowerCase++;
		}
	}

	putchar('\n');
	return (0);
}
