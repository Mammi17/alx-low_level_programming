#include<stdio.h>
#include<stdlib.h>

/**
 * main - Entry point
 *
 * Description: print numbers 0 to 9 on one line with putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	int b;

	for (b = 0; b <= 9; b++)
	{
		putchar('0' + b);
	}
	putchar('\n');

	return (0);
}
