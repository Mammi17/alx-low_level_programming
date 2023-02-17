#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numb, numb1;

	for (numb = 0; numb < 99; numb++)
	{
		for (numb1 = numb + 1; numb1 <= 99; numb1++)
		{
			putchar((numb / 10) + '0');
			putchar((numb % 10) + '0');
			putchar(' ');
			putchar((numb1 / 10) + '0');
			putchar((numb1 % 10) + '0');

			if (numb == 98 && numb1 == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
