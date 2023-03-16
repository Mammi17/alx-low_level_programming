
#include "main.h"
/**
 * _change - convert to a int
 * @s: char
 * Return: int
 */
unsigned long int _change(char *s)
{
	unsigned long int a, b, c, d;

	a = c = 0;
	d = 1;
	while ((s[a] < '0' || s[a] > '9') && (s[a] != '\0'))
	{
		if (s[a] == '-')
			d *= -1;
		a++;
	}
	b = a;
	while ((s[b] >= '0') && (s[b] <= '9'))
	{
		c = (c * 10) + d * ((s[b]) - '0');
		b++;
	}
	return (c);
}
