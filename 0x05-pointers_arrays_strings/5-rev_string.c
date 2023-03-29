#include "main.h"

/**
 * rev_string - A function that reverses a string
 * @s: pointer pointing to the string
 * Return: 0
 */

void rev_string(char *s)
{
	int length;
	int i;
	int half;

	char temp;

	for (length = 0; s[length] != '\0'; length++)
	{
		i = 0;
		half = length / 2;
	}

	while (half--)
	{
		temp = s[length - i - 1];
		s[length - i - 1] = s[i];
		s[i] = temp;
		i++;
	}
}
