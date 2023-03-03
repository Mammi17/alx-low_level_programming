#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer
 * Return: void
 */

void print_number(int n)
{
	int pow, neg, hod;
	
	neg = 0;
	pow = 1;
	hod = n;
	if (n < 0)
	{
		_putchar('-');
		neg = 1;
	}
	while (hod > 9 || hod < -9)
	{
		pow *= 10;
		hod /= 10;
	}
	while (pow > 0)
	{
		if (pow > 9)
		{
			if (neg != 0)
				_putchar((n / pow % 10) + '0');
			else
				_putchar((n / pow % 10) * - 1 + '0');
			pow /= 10;
		}
		if (pow == 1)
		{
			if (neg)
				_putchar((n % 10) * - 1 = '0');
			else
				_putchar((n % 10) + '0');
			pow = 0;
		}
	}
}
