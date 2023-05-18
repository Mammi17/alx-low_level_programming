#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Generates and prints passwords for the crackme5 executable.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: integer.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char pass[7], *code;
	int l = strlen(argv[1]), a, point;

	code = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	point = (l ^ 59) & 63;
	pass[0] = code[point];
	point = 0;
	a = 0;
	while (a < l)
	{
		point += argv[1][a];
		a++;
	}
	pass[1] = code[(point ^ 79) & 63];
	point = 1;
	for (a = 0; a < len; a++)
		point *= argv[1][a];
	pass[2] = code[(point ^ 85) & 63];
	point = 0;
	for (a = 0; a < l; a++)
	{
		if (argv[1][a] > point)
			point = argv[1][a];
	}
	srand(point ^ 14);
	pass[3] = code[rand() & 63];

	point = 0;
	a = 0;
	while (a < len)
	{
		point += (argv[1][a] * argv[1][a]);
		a++;
	}
	pass[4] = code[(point ^ 239) & 63];
	for (a = 0; a < argv[1][0]; a++)
		point = rand();
	pass[5] = code[(point ^ 229) & 63];
	pass[6] = '\0';
	printf("%s", pass);
	return (0);
}
