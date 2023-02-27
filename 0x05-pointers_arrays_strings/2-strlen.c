#include "main.h"

/**
 * _strlen - length of a string
 * @s: a pointer
 * Return: 0
 */

int _strlen(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
