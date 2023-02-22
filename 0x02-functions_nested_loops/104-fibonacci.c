#include <stdio.h>
/**
 * main -funds and prints the first 98 fibonacci, starting with 1 and 2
 * Return: an integer
 */

int main(void)
{
	int a;
	unsigned long int b, c, d, i, j;
	unsigned long int up, up1;

	b = 1;
	c = 2;
	d = 10000000000;
	printf("%lu, %lu", b, c);
	for (a = 2; a < 91; a++)
	{
		c += b;
		b = c - b;
	}
	up = b / d;
	up1 = b % d;
	i = c / l;
	j = c % l;
	for (a = 92; a < 99; a++)
	{
		printf(", %lu", i + (j / l));
		printf("%lu", j % l);
		i = i + up;
		up = i - up;
		j = j + up1;
		up1 = j - up1;
	}
	printf("\n");
	return (0);
}
