#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function that creates spaces from heap and
 * assigning a character to it.
 * @size : an integer
 * @c : a char
 * Return: point
 */

char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *point;

	if (size == 0)
		return (NULL);
	point = (char *) malloc(size * sizeof(char));
	if (point == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
	{
		*(point + j) = c;
	}
	return (point);
}
