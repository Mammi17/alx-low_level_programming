#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * array_range - that create an array of integers
 * @min: an integer
 * @max: an integer
 * Return: a pointer of int
 */

int *array_range(int min, int max)
{
	int *point, i, b;

	if (min > max)
	{
		return (0);
	}
	point = (int *) malloc((max - min + 1) * sizeof(int));
	if (point == NULL)
		return (NULL);
	b = min;
	for (i = 0; i <= max - min; i++)
	{
		point[i] = b++;
	}
	return (point);
}
