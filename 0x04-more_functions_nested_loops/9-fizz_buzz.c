#include<stdio.h>
#include <stdio.h>

/**
 * main - prints fizz for int divisible by 3 and buzz for 5
 * Return: 0
 */

int main(void)
{
	int i;

	printf("1");
	for (i = 2; i <= 100; i++)
	{
		putchar(' ');
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		if (i % 5 == 0)
		{
			printf("Buzz");
		}
		if ((i % 3 != 0) && (i % 5 != 0))
		{
			printf("%d", i);
		}
	}
	printf("\n");
	return (0);
}
