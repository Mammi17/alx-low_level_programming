#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - thats converts a binary an unsigned integer
 * @b: a constant character pointer
 * Return: an unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int numb;

	numb = 0;
	if (b == NULL)
		return (0);
	j = 0;
	while (b[j])
	{
		if (b[j] < '0' || b[j] > '1')
		{
			return (0);
		}
		numb = 2 * numb + b[j] - '0';
		j++;
	}
	return (numb);
}
