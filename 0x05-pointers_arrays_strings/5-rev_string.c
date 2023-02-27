#include "main.h"
/**
 * rev_string - prints a reverse a string
 * @s: a pointer char
 */

void rev_string(char *s)
{
	int i, j;
	char b[600];

	i = 0;
	j = 0;
	while (*(s + i))
	{
		*(b + i) = *(s + i);
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		*(s + i) = *(b + j);
		j++;
		i--;
	}
}
