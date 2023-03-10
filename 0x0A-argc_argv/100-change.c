#include <stdio.h>
#include <stdlib.h>

/**
 * main- prints the minimum number of coins
 * @argc: integer
 * @argv: pointer
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{
	int i, ch = 0, n, money[] = {25, 10, 5, 2, 1};

	if (argc != 2)

	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i <= 4; i++)
	{
		while (n >= 0 && n >= money[i])
		{
			n -= money[i];
			ch++;
		}
	}
		printf("%d\n", ch);
		return (0);
}
