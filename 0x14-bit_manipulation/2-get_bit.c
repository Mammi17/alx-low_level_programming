#include "main.h"
#include <stdio.h>
/**
 * get_bit - that returns the value of a bit at a given index
 * @n: an unsigned long integer
 * @index: an an unsigned int
 * Return: an integer
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	if ((n & (1 << index)) == 0)
	{
		return (0);
	}
	return (1);
}
