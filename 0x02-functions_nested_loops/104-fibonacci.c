#include <stdio.h>
/**
 * main -funds and prints the first 98 fibonacci, starting with 1 and 2
 * Return: an integer
 */

int main(void)
{
	int a;
	unsigned long int b, c;

	b = 1;
	c = 2;
	for (a = 0; a < 98; a++)
	{
		if (a == 0)
			printf("%lu", b);
		else if (a == 1)
			printf(", %lu", c);
		else
		{
			c += b;
			b = c - b;
			printf(", %lu", c);
		}
	}
	printf("\n");
	return (0);
}
