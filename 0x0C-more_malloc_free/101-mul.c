#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * main - that multiplie two positives numbers
 * @argv: a pointer
 * @argc: an integer
 * Return: the value int
 */
int main(int argc, char **argv)
{
	int j, l;
	unsigned long int mul, num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (j = 1; j < argc; j++)
	{
		for (l = 0; argv[j][l] != '\0'; l++)
		{
			if (argv[j][l] > 57 || argv[j][l] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;
	printf("%lu\n", mul);
	return (mul);
}
