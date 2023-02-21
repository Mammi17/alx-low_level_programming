#include <stdio.h>
/**
 * main - print the sum of all the multiples of 3 or 5 bellow 1024
 * Return: an integer
 */

int main (void)
{
	int a, b;

	b = 0;
	for (a = 0; a < 1024; a++)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
			b += a;
	}
	printf("%d\n", b);
	return (0);
}
