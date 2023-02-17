#include<stdio.h>
#include<stdlib.h>

/**
 * main - Entry point
 *
 * Description: print all the digits of base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char base;

	for (base = '0'; base <= '9'; base++)
	{
		putchar(base);
	}
	for (base = 'a'; base <= 'f'; base++)
	{
		putchar(base);
	}

	putchar('\n');
	return (0);
}
