#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer
 * Return: void
 */

void print_number(int n)
{
	int pod;

	pod = n;
	/*if (n < 0)
	{
		_putchar('-');
		pod = -pod;
	}*/
	if ((pod / 10) > 0)
		_print_number(pod / 10);
	_putchar((pod % 10) + '0');
}
