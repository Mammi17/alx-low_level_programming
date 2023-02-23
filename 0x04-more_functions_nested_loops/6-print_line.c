#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: limit
 * Return: 0
 */

void print_line(int n)
{
	int b;

	if (n > 0)
	{
		for (b = 0; b < n; b++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
