#include <stdio.h>
/**
 * main - prints the fibonacci number
 * Return: an integer
 */

int main(void)
{
	long int a, b, c, s;

	b = 1;
	c = 2;
	s = c;
	for (a = 0; (a = b + c) < 4000000; a++)
	{
		c += b;
		if (c % 2 == 0)
		{
			s += c;
		}
		b = c - b;
		printf("%ld", s);
	}
	printf("\n");
	return (0);
}
