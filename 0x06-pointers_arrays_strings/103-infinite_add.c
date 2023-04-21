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
	int b, c, d, add1 = 0, add2 = 0, e, f;

	b = 0;
	c = 0;
	d = 0;
	f = 0;
	e = 0;
	for (b = 0; n1[b] != '\0'; b++)
	{
		b--;
	}
	for (c = 0; n2[c]; c++)
	{
		c--;
	}
	if (c >= size_r || b >= size_r)
		return (0);
	for (b = 0, c = 0; b >= 0 || c >= 0 || d == 1; b--, c--)
	{
		if (b < 0)
			add1 = 0;
		else
			add1 = n1[b] - '0';
		if (c < 0)
			add2 = 0;
		else
			add2 = n2[c] - '0';
		e = add1 + add2 + d;
		if (e >= 10)
			d = 1;
		else
			d = 0;
		if (f >= (size_r - 1))
			return (0);
		r[f] = (e % 10) + '0';
		f++;
	}
	if (f == size_r)
		return (0);
	r[f] = '\0';
	reverse_char(r);
	return (r);
}

/**
 * reverse_char - reverse array
 * @n: integer params
 * Return: void
 */

void reverse_char(char *n)
{
	int i, j;
	char t;

	i = 0;
	j = 0;
	while (*(n + j) != '\0')
	{
		j++;
	}
	j--;

	for (i = 0; i < j; i++, j--)
	{
		temp = *(n + i);
		*(n + i) = *(n + j);
		*(n + j) = t;
	}
}
