#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - that return the sum of all its parameters
 * @n: an unsigned int
 * @...: the remainder of the number of arguments
 * Return: an integer
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nb;
	unsigned int j, sum = 0;

	va_start(nb, n);
	if (n == 0)
		return (0);
	j = 0;
	while (j < n)
	{
		sum += va_arg(nb, unsigned int);
		j++;
	}
	va_end(nb);
	return (sum);
}
