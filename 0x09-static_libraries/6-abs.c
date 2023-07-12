#include "main.h"
/**
 * _abs -  a function that computes the absolute value of an integer
 * @a: input variable
 * Return: a always
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else
		a = a;
	return (a);
}
