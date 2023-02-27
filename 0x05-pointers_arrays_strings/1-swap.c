#include "main.h"
/**
 * swap_int - swaps the value of two integer
 * @a: a pointer to an int that will be updated
 * @b: a pointer to an int that will be updated
 */

void swap_int(int *a, int *b)
{
	int h;

	h = *a;
	*a = *b;
	*b = h;
}
