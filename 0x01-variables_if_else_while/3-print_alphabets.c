#include<stdio.h>
#include<stdlib.h>

/**
 * main - print lowercase and uppercase alphabet on the same line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphab;

	for (alphab = 'a'; alphab <= 'z'; alphab++)
	{
		putchar(alphab);
	}
	for (alphab = 'A'; alphab <= 'Z'; alphab++)
	{
		putchar(alphab);
	}

	putchar('\n');

	return (0);
}
