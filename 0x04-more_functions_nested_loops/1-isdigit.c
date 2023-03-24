#include "main.h"

/**
 * _isdigit - a function that checks for a digit
 * @c: The variable to be checked
 * Return: 1 for a digit
 * 0 for anything else
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
