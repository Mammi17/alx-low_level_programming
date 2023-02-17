#include<stdio.h>
#include<stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d;

	d = 0;
	while (d < 10)
	{
		putchar(48 + d);
		if (d != 9)
		{
			putchar(',');
			putchar(' ');
		}
		d++;
	}
	putchar('\n');
	return (0);
}
