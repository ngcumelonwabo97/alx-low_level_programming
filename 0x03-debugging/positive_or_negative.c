#include "main.h"
/**
 * positive_or_negative - checks for positive and negative numbers
 * @i: the input variable
 * Return: 0
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative", i);
	else
		printf("%d is positive", i);
}
