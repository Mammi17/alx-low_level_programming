#include <stdio.h>
/**
 * main -funds and prints the first 98 fibonacci, starting with 1 and 2
 * Return: an integer
 */

int main(void)
{
	int a;
	unsigned long int b, c, d, i = 0, j = 0;
	unsigned long int up, up1, up2, e;

	b = 1;
	c = 2;
	d = 10000000000;
	e = b + c;
	printf("%lu, %lu, ", b, c);
	for (a = 2; a < 98; a++)
	{
		if (e > d || i > 0 || j > 0)
		{
			up = e / d;
			up1 = e % d;
			up2 = i + j + up;
			i = j, j = up2;
			b = c, c = up1;
			printf("%lu%010lu", j, c);
		}
		else
		{
			up1 = c + b;
			b = c, c = up1;
			printf("%lu", c);
		}
		if (a != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
