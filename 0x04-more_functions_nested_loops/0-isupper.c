#include "main.h"

/**
 * _isupper - a function that checks for uppercase character.
 * @c: the character to be checked
 * Return: 1 for uppercase character
 * 0 for anything else
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else return (0);
}
