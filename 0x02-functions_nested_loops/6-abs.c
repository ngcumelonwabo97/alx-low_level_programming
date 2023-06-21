#include <stdio.h>
/**
 * int _abs(int) -  a function that computes the absolute value of an integer
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
