#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: -1 or a
 */

int linear_search(int *array, size_t size, int value)
{
	size_t a;

	if (array == NULL)
	{
		return (-1);
	}
	for (a = 0; a < size; a++)
	{
		printf("Value checked array[%li] = [%i]\n", a, array[a]);
		if (array[a] == value)
		{
			return (a);
		}
	}
	return (-1);
}
