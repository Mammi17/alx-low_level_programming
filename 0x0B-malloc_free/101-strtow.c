#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * strtow - splits a string into words
 * @str: a pointer
 * Return: pointer
 */

char **strtow(char *str)
{
	char **point, *string;
	int b, i = 0, j = 0, a, d, t, l = 0;

	a = 0;
	while (str[a])
		a++;
	b = count(str);
	if (b == 0)
		return (NULL);
	point = (char **) malloc((b + 1) * sizeof(char *));
	if (point == NULL)
		return (NULL);
	for (j = 0; i <= a; j++)
	{
		if (str[j] == ' ' || str[j] == '\0')
		{
			if (i)
			{
				d = j;
				string = (char *) malloc((i + 1) * sizeof(char));
				if (string == NULL)
					return (NULL);
				while (t < d)
					*string++ = str[t++];
				*string = '\0';
				point[l] = string - i;
				l++;
				i = 0;
			}
		}
		if (i++ == 0)
			t = j;
	}
	point[l] = NULL;
	return (point);
}
/**
 * count - a function
 * @f: a pointer
 * Return: an integer
 */

int count(char *f)
{
	int a = 0, b = 0, k;

	for (k = 0; f[k] != '\0'; k++)
	{
		if (f[k] == ' ')
			a = 0;
		if (a == 0)
		{
			a = 1;
			b++;
		}
	}
	return (b);
}
