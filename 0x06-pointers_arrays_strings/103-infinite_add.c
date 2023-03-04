#include "main.h"
#include <stdio.h>
/*
 * infinite_add - that adds two numbers
 * @n1: a pointer
 * @n2: a pointer
 * @r: a pointer
 * @size_r: an integer
 * Return: a character
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a, b, c;

	b = 0;
	c = 0;
	for (a = 0; n1[a]; a++)
	{
		b++;
	}
	for (a = 0; n2[a]; a++)
	{
		c++;
	}
	if (size_r <= b + 1 || size_r <= c + 1)
		return 0;
	n1 += b - 1;
	n2 += c - 1;
	r[size_r] = '\0';
	d = add_strings(n1, n2, r, --size_r);
	return (d);
}
