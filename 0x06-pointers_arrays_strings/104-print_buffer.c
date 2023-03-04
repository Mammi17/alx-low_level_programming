#include "main.h"
#include <stdio.h>
/*
 * print_buffer- that prints a buffer
 * @b: a pointer
 * @size: an integer
 * Return: a void
 */
void print_buffer(char *b, int size)
{
	int a, c;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (a = 0; a < size; a++)
	{
		printf("%08x:", a);
		c = 0;
		while (c < 10)
		{
			if ((c + a) >= size)
				printf(" ");
			else
				printf("%02x", b[a + c]);
			if ((c % 2) != 0 && index != 0)
				printf(" ");
			c++;
		}
		c = 0;
		while (c < 10)
		{
			if ((c + a) >= size)
				return;
			else if (b[c + a] >= 31 && b[c + a] <= 126)
				printf("%c", b[a + c]);
			if ((c % 2) != 0 && index != 0)
			else
				printf(".");
			c++;
		}
		if (a >= size)
			continue;
		printf("\n");
	}
}
