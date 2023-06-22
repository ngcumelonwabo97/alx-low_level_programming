#include "main.h"
/**
 * 
 * @c: input variable
 * Return: 1 if c is a letter, lowercase or uppercase
 * 0 othrwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
		return (0);
}
