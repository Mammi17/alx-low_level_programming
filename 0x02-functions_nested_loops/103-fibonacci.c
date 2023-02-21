#include <stdio.h>
/**
 * main - prints the fibonacci number
 * Return: an integer
 */

int main(void)
{
	long int a, b, c, s;

	b = 1;
	c = 0
	for (a = 0; a < 4000000; a++)
	{
		a = b + c;
		b = c;
		b = a;
		if (a % 2 == 0)
		{
			s += a;
		}
		printf("%ld", s);
	}
	printf("\n");
	return (0);
}
