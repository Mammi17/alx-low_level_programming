#include <stdio.h>
/**
 * main - prints the first 50 fibonacci, starting with 1 and 2
 * Return: an integer
 */

int main (void)
{
	int a, b, c;
	for(a = 0; a < 50; a++)
	{
		if (a == 0)
			printf("%d", b);
		if (a == 1)
			printf("%d", c);
		else
		{
			c += b;
			b = c - b;
			printf("%d",k);
		}
		printf("\n");
	}
	return (0);
}