#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit, digits, digit1;

	for (digit = 0; digit < 8; digit++)
	{
		for (digits = digit + 1; digits <= 8; digits++)
		{
			for (digit1 = digits + 1; digit1 <= 9; digit1++)
			{
				putchar((digit % 10) + '0');
				putchar((digits % 10) + '0');
				putchar((digit1 % 10) + '0');
				if (digit == 7 && digits == 8 && digit1 == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
