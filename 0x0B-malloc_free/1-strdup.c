#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory
 * @str : a pointer
 * Return: point
 */

char *_strdup(char *str)
{
	char *point;
	int j = 0;

	if (str == NULL)
		return (NULL);
	while (str[j] != '\0')
		j++;
	j++;
	point = (char *) malloc(j * sizeof(char));
	if (point == NULL)
		return (NULL);

	strcpy(point, str);
	return (point);
}
