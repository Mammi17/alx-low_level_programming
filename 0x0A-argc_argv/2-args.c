#include <stdio.h>
#include <stdlib.h>

/**
 * main- prints all arguments it receives
 * @argc: number of arguments
 * @argv: pointer
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
		printf("\n");
	}
	return (0);
}
