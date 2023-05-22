#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: pointer
 * @accept: pointer
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k;

	i = 0;
	k = 0;
	while (accept[i])
	{
		j = 0;
		while (s[j] != 32)
		{
			if (accept[i] == s[j])
				k++;
			j++;
		}
		i++;
	}
	return (k);
}
