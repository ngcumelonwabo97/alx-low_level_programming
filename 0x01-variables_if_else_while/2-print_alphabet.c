#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase, 
 * followed by a new line.
 *
 * Return: 0 success
 */

int main(void)
{
	int lowerCase = 'a';
	while (lowerCase <= 'z')
	{
		putchar(lowerCase);
		lowerCase++;
	}
	putchar('\n');

	return (0);
}
