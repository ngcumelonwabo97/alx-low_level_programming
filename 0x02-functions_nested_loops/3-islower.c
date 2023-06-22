#include "main.h"
/**
 * _islower -  a function that checks for lowercase character.
 * @c: input variable
 *
 * Return: 1 if lowercase
 * 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
