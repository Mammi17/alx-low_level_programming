#include <stdio.h>
/**
 * main -funds and prints the first 98 fibonacci, starting with 1 and 2
 * Return: an integer
 */

int main(void)
{
	int a;
	unsigned long int b, c, d, i, j;
	unsigned long int up, up1, s, k, l;

	b = 1;
	c = 2;
	d = 10000000000;
	printf("%lu, %lu, ", b, c);
	for (a = 2; a < 91; a++)
	{
		s = b + c;
		printf("%lu, ", s);
		b = c;
		c = s;
	}
	up = b / d;
	up1 = b % d;
	i = c / d;
	j = c % d;
	for (a = 92; a < 99; a++)
	{
		k = up + i;
		l = up1 + j;
		if ((up1 + j) > 9999999999)
		{
			k += 1;
			l %= d;
		}
		printf("%lu%lu", k, l);
		if (a != 98)
		printf(", ");
		i = k;
		up = i;
		j = l;
		up1 = j;
	}
	printf("\n");
	return (0);
}
