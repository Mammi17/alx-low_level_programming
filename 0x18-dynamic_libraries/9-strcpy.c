#include "main.h"
/**
 * _strcpy - copies src to dest
 * @dest: char
 * @src: char
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	a = 0;
	while (src[a])
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
