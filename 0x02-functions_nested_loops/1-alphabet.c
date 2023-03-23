#include "main.h"

/**
 * main - main function
 * print_alphabet: function that prints alphabet in lower case
 *
 * Return: always 0
 */

//print_alphabet prints the alphabet in lowercase
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
