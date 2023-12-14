#include "search_algos.h"

/**
 * interpolation_search - search for a value in a sorted array using
 * interpolation search
 * @array: pointer to the start of the array
 * @size: the size of the array (number of elements)
 * @value: the value to be searched for
 *
 * Return: first index value is found at or -1 if not present or array is null
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t a;
	int lent = 0, haut = size - 1;

	if (array == NULL || size == 0)
		return (-1);
	while (lent <= haut)
	{
		a = lent + (((double)(haut - lent) / (array[haut] - array[lent]))
			     * (value - array[lent]));
		if (a > size - 1)
		{
			printf("Value checked array[%ld] is out of range\n", a);
			return (-1);
		}
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		if (array[a] == value)
		{
			return (a);
		}
		else
		{
			if (array[a] > value)
				haut = a - 1;
			else
				lent = a + 1;
		}
	}
	return (-1);
}
