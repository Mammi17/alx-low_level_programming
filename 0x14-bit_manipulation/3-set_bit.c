#include "main.h"
#include <stdio.h>
/**
 * set_bit - that sets the value of a bit to 1 at a given index
 * @n: an unsigned long integer ot type pointer
 * @index: an an unsigned int
 * Return: an integer
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	*n ^= (1 << index);
	return (1);
}
