#include<stdio.h>
#include<stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit, digits;

	for (digit = 0; digit < 9; digit++)
	{
		for (digits = digit + 1; digits <= 9; digits++)
		{
			putchar((digit % 10) + '0');
			putchar((digits % 10) + '0');
			if (digit == 8 && digits == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
