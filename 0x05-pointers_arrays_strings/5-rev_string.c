#include "main.h"
/**
 * rev_string - a function that reverses a string.
 * @s: char variable
 * Return: string in reverse
 */

void rev_string(char *s)
{
	int counter = 0;
	int i;
	char rev = s[0];

	while (s[counter] != '\0')
	{
		counter++;
	}

	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
