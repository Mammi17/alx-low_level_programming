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

	for (a = 0; a < size; a += 10)
	{
		printf("%08x: ", a);
		for (c = 0; c < 10; c++)
		{
			if ((c % 2) != 0 && index != 0)
				printf(" ");
			if ((c + a) >= size)
				printf(" ");
			else
				printf("%02x", *(b + a + c));
		}
		for (c = 0; c < 10; c++)
		{
			if ((c + a) >= size)
				break;
			else if (*(b + c + a) >= 31 && *(b + c + a) <= 126)
				printf("%c", *(b + a + c));
			if ((c % 2) != 0 && index != 0)
			else
				printf(".");
		}
		if (a >= size)
			continue;
		printf("\n");
	}
	if (size <= 0)
	{
		printf("\n");
	}
}
