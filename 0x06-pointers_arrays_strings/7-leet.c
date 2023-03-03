#include "main.h"
/**
 * leet - function that encodes a string into 1337
 * @c: pointer
 * Return: a char
 */

char *leet(char *c)
{
	int a, b;
	char low[] = "aeotl", up[] = "AEOTL", numb[] = "43071";

	for (a = 0; c[a] != '\0'; a++)
	{
		for (b = 0; (low[b] != '\0') && (up[b] != '\0'); b++)
		{
			if (c[a] == low[b] || c[a] == up[b])
			{
				c[a] = numb[b];
				break;
			}
		}
	}
	return (c);
}
