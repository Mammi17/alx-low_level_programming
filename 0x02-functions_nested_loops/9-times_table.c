#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 */
void times_table(void)
{
	int numb, mult, prod;

	for (numb = 0; numb <= 9; numb++)
	{
		_putchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');
			prod = numb * mult;

			if (prod <= 9)
				_putchar(' ');
			else
			_putchar((prod / 10) + '0');
			_putchar((prod % 10) + '0');
		}
			_putchar('\n');
	}
}
