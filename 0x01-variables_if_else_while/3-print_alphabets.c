#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 *
 * Return: 0 success
 */

int main(void)
{
	int lowerCase = 'a';
	int upperCase = 'A';

	while (lowerCase <= 'z')
	{
		putchar(lowerCase);
		lowerCase++;
	}

	while (upperCase <= 'Z')
	{
		putchar(upperCase);
		upperCase++;
	}

	putchar('\n');
	return (0);
}
