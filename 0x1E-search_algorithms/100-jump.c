#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searches for a value in an array of
 * integers using the Jump search algorithm
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number(integer)
 */
int jump_search(int *array, size_t size, int value)
{
	int ind, a, b, precedent = 0;

	if (array == NULL || size == 0 || array[precedent] > value)
		return (-1);

	a = (int)sqrt((double)size);
	b = 0;
	ind = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", ind, array[ind]);

		if (array[ind] == value)
			return (ind);
		b++;
		precedent = ind;
		ind = b * a;
	} while (ind < (int)size && array[ind] < value);

	printf("Value found between indexes [%d] and [%d]\n", precedent, ind);

	for (; precedent <= ind && precedent < (int)size; precedent++)
	{
		printf("Value checked array[%d] = [%d]\n", precedent, array[precedent]);
		if (array[precedent] == value)
			return (precedent);
	}

	return (-1);
}
