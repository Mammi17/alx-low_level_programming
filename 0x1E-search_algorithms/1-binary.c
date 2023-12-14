#include "search_algos.h"
/**
  * binary_search - Searches for a value in a sorted array
  *                 of integers using binary search.
  * @array: pointe to the first element of the array to search.
  * @size: number of elements in the array.
  * @value: The value to search for.
  * Description: Prints the [sub]array being searched after each change.
  * Return:  -1 or an integer.
  */
int binary_search(int *array, size_t size, int value)
{
	size_t a, gauche, droit;

	if (array == NULL)
		return (-1);
	for (gauche = 0, droit = size - 1; droit >= gauche;)
	{
		printf("Searching in array: ");
		for (a = gauche; a < droit; a++)
			printf("%d, ", array[a]);
		printf("%d\n", array[a]);
		a = gauche + (droit - gauche) / 2;
		if (array[a] == value)
			return (a);
		if (array[a] > value)
			droit = a - 1;
		else
			gauche = a + 1;
	}
	return (-1);
}
