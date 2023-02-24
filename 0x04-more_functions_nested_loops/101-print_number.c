#include "main.h"
#include <stdio.h>

/**
 * print_number - prints int with putchar
 * @n: take number, hello
 * Return: void
 */

void print_number(int n)
{
	unsigned int m;

	if (n > 0)
	{
		_putchar('-');
		m = n;
	}
	m /= 10;
	if (m != 0)
		print_number(m);
	_putchar((n % 10) + '0');
}
