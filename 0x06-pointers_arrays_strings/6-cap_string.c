#include "main.h"
/**
 * cap_string - function that capitalizes all words of a strin
 * @c: pointer
 * Return: a char
 */

char *cap_string(char *c)
{
	int a, b;
	char d[] = {32,';', '.', 9, '!', '?', '(', ')', '{', '}', '\n','"'};

	for (a = 0; c[a] != '\0'; a++)
	{
		for (b = 0; b < 13; b++)
		{
			if ((a == 0 || c[a -1] == d[b]) && (c[a] >= 97 && c[a] <= 122))
			{
				c[a] -= 32;
			}
		}
	}
	return (c);
}
