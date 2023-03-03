#include "main.h"
/**
 * string_toupper - function that changes all lowercase letters
 * of a string to uppercase
 * @c: pointer
 * Return: c
 */

char *string_toupper(char *c)
{
	int a;

	for (a = 0; c[a] != '\0'; a++)
	{
		if (c[a] > 96 && c[a] < 123)
		{
			c[a] -= 32;
		}
	}
	return (c);
}
