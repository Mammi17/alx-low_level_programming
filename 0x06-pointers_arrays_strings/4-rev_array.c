#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: array of integer
 * @n: number of elements of array
 */

void reverse_array(int *a, int n)
{
	int c, b;

	for (c = 0 ; c < (n / 2); c++)
	{
		b = a[c];
		a[c] = a[n - c - 1];
		a[n - c - 1] = b;
	}
}
