#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number.
 * @n: input varible
 * Return: value of the last digit (k in this case)
 */

int print_last_digit(int n)
{
	int k;

	k = n % 10;

	if (k < 0)
	{
		k = -(k);
	}

	_putchar(k + '0');

	return (k);
	}
