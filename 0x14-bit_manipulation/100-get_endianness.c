#include "main.h"
#include <stdio.h>
/**
 * get_endianness - that checks the endianness
 *
 * Return: an integer
 */

int get_endianness(void)
{
	int numb = 1;
	char *end;

	end = (char *)&numb;
	if (*end == 1)
	{
		return (1);
	}
	return (0);
}
