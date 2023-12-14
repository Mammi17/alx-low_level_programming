#include "search_algos.h"

/**
  * bi_search - Searches for a value in a sorted array
  *                  of integers using binary search.
  * @array: A pointer to the first element of the array to search.
  * @gauche: The starting index of the [sub]array to search.
  * @droite: The ending index of the [sub]array to search.
  * @value: The value to search for.
  * Description: Prints the sub-array being searched after each change.
  * Return: -1 or Otherwise
  */
int bi_search(int *array, size_t gauche, size_t droite, int value)
{
	size_t ;

	if (array == NULL)
		return (-1);

	while (droite >= gauche)
	{
		printf("Searching in array: ");
		for (a = gauche; a < droite; a++)
			printf("%d, ", array[a]);
		printf("%d\n", array[a]);

		a = gauche + (droite - gauche) / 2;
		if (array[a] == value)
			return (a);
		if (array[a] > value)
			droite = a - 1;
		else
			gauche = a + 1;
	}

	return (-1);
}

/**
  * exponential_search - Searches for a value in a sorted array
  *                      of integers using exponential search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  * Description: Prints a value every time it is compared in the array.
  * Return: -1 or Otherwise
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t a = 0, droite;

	if (array == NULL)
		return (-1);
	if (array[0] != value)
	{
		for (a = 1; a < size && array[a] <= value; a = a * 2)
			printf("Value checked is array[%ld] = [%d]\n", a, array[a]);
	}
	droite = a < size ? a : size - 1;
	printf("Value found between indexes is [%ld] and [%ld]\n", a / 2, droite);
	return (bi_search(array, a / 2, droite, value));
}
