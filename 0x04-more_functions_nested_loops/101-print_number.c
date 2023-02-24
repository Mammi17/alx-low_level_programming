#include "main.h"
#include <stdio.h>

/**
 * print_number - prints int with putchar
 * @n: take number, hello
 * Return: a void
 */

void print_number(int n)
{
	unsigned int m;

	m = n;
	if (n < 0)
	{
		n *= -1;
		m = n;
		_putchar('-');
	}
	m /= 10;
	if (m != 0)
		print_number(m);
	_putchar(n % 10 + '0');
}
