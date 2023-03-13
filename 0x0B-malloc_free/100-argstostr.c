#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of program
 * @ac: an integer
 * @av: a pointer
 * Return: point
 */

char *argstostr(int ac, char **av)
{
	int a = 0, j, i, b;
	char *point;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
		for (i = 0; av[j][i] != '\0'; i++)
			a++;
		a++;
	}
	point = (char *) malloc((a + 1) * sizeof(char));
	if (point == NULL)
		return (NULL);
	for (b = j = i = 0; b < a; i++, b++)
	{
		if (av[j][i] == '\0')
		{
			point[b] = '\n';
			j++;
			b++;
			i = 0;
		}
		if (b < a - 1)
			point[b] = av[j][i];
	}
	point[b] = '\0';
	return (point);
}
