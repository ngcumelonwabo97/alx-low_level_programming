#include "main.h"
/**
 * _strlen - a function that returns the length of a string.
 * @s: char variable
 * Return: length of string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
	{
		length++;
	}

	return (length);
}
