#include<stdio.h>
#include <stdio.h>

/**
 * main - prints fizz for int divisible by 3 and buzz for 5
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}

		else
		{
			printf("%d", i);
		}
		putchar(' ');
	}
	printf("\n");
	return (0);
}
