#include "main.h"

/**
 * more_numbers - prints the numbers from 0 to 14 to times
 * Return: 0
 */

void more_numbers(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 1; b++)
		{
			for (c = 0; c <= 9; c++)
			{
				if (!(b == 1 && c >= 5))
				{
					if (b)
						_putchar(b + '0');
					_putchar(c + '0');
				}
			}
		}
		_putchar('\n');
	}
}
