#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _realloc - that reallocate a memory block
 * @ptr: a pointer
 * @old_size: an integer
 * @new_size: an integer
 * Return: a pointer of void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *point;
	char *x, *y;
	unsigned int i;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	y = ptr;
	point = (void *) malloc(new_size);
	x = point;
	if (point == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < new_size && i < old_size; i++)
	{
		x[i] = y[i];
	}
	free(ptr);
	return (point);
}
