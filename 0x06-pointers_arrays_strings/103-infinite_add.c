#include "main.h"

/**
 * infinite_add - a function that adds two numbers.
 * @n1: first number to be inserted
 * @n2: second number to be inserted
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0;
	int digits = 0;
	int val1 = 0;
	int temp_total = 0;
	int val2 = 0;
	int i = 0, j = 0;

	while (*(n1 + i) != '\0')
		i++;

	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;

	if (j >= size_r || i >= size_r)
		return (0);

	while (j >= 0 || i >= 0 || overflow == 1)
	{
		if (i < 0)
			val1 = 0;
		else
			val1 = *(n1 + i) - '\0';
		if (j < 0)
			val2 = 0;
		else
			val2 = *(n2 + j) - '\0';
		temp_total = val1 + val2 + overflow;
		if (temp_total >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp_total % 10) + '0';
		digits++;
		j--;
		i--;
	}
}
