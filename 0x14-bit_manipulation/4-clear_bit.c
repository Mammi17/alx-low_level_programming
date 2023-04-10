#include "main.h"
#include <stdio.h>
/**
 * clear_bit - that set the value of a bit to 0 at a given index
 * @n: an unsigned long integer
 * @index: an an unsigned int
 * Return: an integer
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	*n &=  ~(1 << index);
	return (1);
}
