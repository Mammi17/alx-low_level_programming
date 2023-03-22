#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - that perform simple operation
 * @argc: an integer
 * @argv: a charactere
 * Return: an integer
 */
int main(int argc, char **argv)
{
	int num1, num2;
	int (*operator)(int, int);
	char c;

	if (argc != 4)
	{
		printf("Error\n");
			exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = get_op_func(argv[2]);
	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	c = *argv[2];
	if ((c == '/' || c == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", operator(num1, num2));
	return (0);
}
