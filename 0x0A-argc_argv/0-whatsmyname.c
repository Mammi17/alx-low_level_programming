#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of program
 * @argc: an integer
 * @argv: a pointer
 * Return: 0
 */

int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
