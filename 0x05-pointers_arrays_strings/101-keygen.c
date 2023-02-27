#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - random password generator for 101-crackme
 *
 * Return: 0
 */
int main(void)
{
	char i[200];
	int a, b, c;

	b = 0;
	c = 0;
	srand(time(NULL));
	while (b < 2645)
	{
		a = rand() % 122;
		if (a > 32)
		{
			i[c++] = a;
			b += a;
		}
	}
	i[c++] = (2772 - b);
	i[c] = '\0';
	printf("%s", i);
	return (0);
}
