#include "search_algos.h"
/**
 * recursive_search - searches for a value in an array of
 * integers using the Binary search algorithm
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: an integer
 */
int recursive_search(int *array, size_t size, int value)
{
	size_t h = size / 2;
	size_t a;

	if (array == NULL || size == 0)
		return (-1);
	printf("Searching in array");
	for (a = 0; a < size; a++)
		printf("%s %d", (a == 0) ? ":" : ",", array[a]);

	printf("\n");
	if (h && size % 2 == 0)
		h--;
	if (value == array[h])
	{
		if (h > 0)
			return (recursive_search(array, h + 1, value));
		return ((int)h);
	}
	if (value < array[h])
		return (recursive_search(array, h + 1, value));
	h++;
	return (recursive_search(array + h, size - h, value) + h);
}

/**
 * advanced_binary - calls to rec_search to return
 * the index of the number
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: an integer
 */
int advanced_binary(int *array, size_t size, int value)
{
	int ind;

	ind = recursive_search(array, size, value);
	if (ind >= 0 && array[ind] != value)
		return (-1);
	return (ind);
}
