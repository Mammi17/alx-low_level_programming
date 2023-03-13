#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - function that concatenates two string
 * @s1: a pointer
 * @s2: a pointer
 * Return: point
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, t;
	char *point;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	t = i + j + 1;
	point = (char *) malloc(t * sizeof(char));
	if (point == NULL)
		return (NULL);
	strcpy(point, s1);
	strcat(point, s2);
	return (point);
}
