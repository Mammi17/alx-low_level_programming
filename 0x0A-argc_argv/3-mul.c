#include <stdio.h>
#include <stdlib.h>

/**
 * main- prints the name of programm
 * @argc: integer
 * @argv: pointer
 * Return: 0 or 1
 */

int main(int argc, char **argv)
{
	int mul, n1, n2;

	mul = 0;
	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	mul = n1 * n2;
	printf("%d\n", mul);
	return (0);
}
