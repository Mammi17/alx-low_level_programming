#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - that executes function given as
 * a parameter on each element of an array
 * @array: pointer
 * @size: a size_t
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t j;

	if (array && action)
	{
		for (j = 0; j < size; j++)
		{
			action(array[j]);
		}
	}
}
