#include "main.h"
#include <stdio.h>

/**
 * print_number - prints int with putchar
 * @n: take number, hello
 */

void print_number(int n)
{
	unsigned int m;

	if (n > 0)
	{
		_putchar('-');
		m = -n;
	}
	else
	{
		m = n;
	}
	m /= 10;
	if (m != 0)
		print_number(m /= 10);
	_putchar((n % 10) + '0');
}
