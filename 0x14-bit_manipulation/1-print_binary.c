#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * print_binary - tha prints the binary representation number
 * @n: an unsigned integer
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int b;
	char c;

	if (n > 1)
	{
		b = n >> 1;
		print_binary(b);
	}
	c = (n & 1) + '0';
	write(1, &c, 1);
}
