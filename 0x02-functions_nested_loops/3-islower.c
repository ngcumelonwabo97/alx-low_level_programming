#include <stdio.h>
/**
 * int _islower(int c) -  a function that checks for lowercase character.
 *
 * Return: 1 if lowercase
 * Return: 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
