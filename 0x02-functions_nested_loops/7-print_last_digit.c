#include "main.h"

/**
 * print_last_digit - The function prints the last digit of a number
 *
 * @i: function parameter
 *
 * Return: k
 */

int print_last_digit(int i)
{
	int k;

	k = i % 10;
	if (k < 0)
		k = -k;
	return (k);
}
