#include "main.h"
/**
 * cap_string - function that capitalizes all words of a strin
 * @c: pointer
 * Return: a char
 */

char *cap_string(char *c)
{
	int a, b;
	int trig;

	char d[] = ",;.!?(){}\nt\" ";

	trig = 0;
	for (a = 0; c[a] != '\0'; a++)
	{
		if (c[0] > 96 && c[0] < 123)
		{
			trig = 1;
		}
		for (b = 0; d[b] != '\0'; b++)
		{
			if (d[b] == c[a])
			{
				trig = 1;
			}
		}
		if (trig)
		{
			if (c[a] > 96 && c[a] < 123)
			{
				c[a] -= 32;
				trig = 0;
			}
			else if (c[a] > 64 && c[a] < 91)
			{
				trig = 0;
			}
			else if (c[a] > 47 && c[a] < 58)
			{
				trig = 0;
			}
		}
	}
	return (c);
}
