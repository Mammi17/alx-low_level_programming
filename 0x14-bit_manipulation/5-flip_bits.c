#include "main.h"
#include <stdio.h>
/**
 * flip_bits - that returns the number of bityou would need to flip
 * @n: an unsigned long integer
 * @m: an unsigned  long int
 * Return: an integer
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int numb, count;

	numb = 0;
	count = n ^ m;
	while (count > 0)
	{
		numb += (count & 1);
		count = count >> 1;
	}
	return (numb);
}
