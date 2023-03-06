#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: pointer
 * @c: a char
 * Return: a pointer
 */
char *_strchr(char *s, char c)
{
	int i, j;

	i = 0;
	while (s[i])
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		if (c == s[j])
		{
			s += j;
			return (s);
		}
	}
	return ('\0');
}
