#include "main.h"
/**
 * rot13 - function that encodes string using rot13
 * @c: pointer
 * Return: a pointer
 */

char *rot13(char *c)
{
	int a, b;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; c[a] != '\0'; a++)
	{
		for (b = 0; in[b] != '\0'; b++)
		{
			if (c[a] == in[b])
			{
				c[a] = out[b];
				break;
			}
		}
	}
	return (c);
}
