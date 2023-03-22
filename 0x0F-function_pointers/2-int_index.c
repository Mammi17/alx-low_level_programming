#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - that searches for an integer
 * @array: pointer
 * @size: an integer
 * @cmp: function pointer
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (j = 0; j < size; j++)
		{
			if (cmp(array[j]) != 0)
				return (j);
		}
	}
	return (-1);
}
