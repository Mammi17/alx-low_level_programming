#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - function that concatenates two strings
 * @s1: a character
 * @s2: a caracter
 * @n: a integer
 * Return: a char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *point;
	unsigned int a, b, i;

	if (s2 == NULL)
	{
		s2 = "";
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	a = 0;
	b = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;
	if (n > b)
		n = b;
	point = (char *) malloc((a + n + 1) * sizeof(char));
	if (point == NULL)
		return (NULL);
	for (i = 0; i <= a; i++)
	{
		point[i] = s1[i];
	}
	strncat(point, s2, n);
	return (point);
}
