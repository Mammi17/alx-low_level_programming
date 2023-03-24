#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - functions that print numbers
 * @n: an unsigned int
 * @separator: a pointer constant
 * @...: the remainder of the number of arguments
 * Return: an integer
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list note;
	unsigned int j;

	va_start(note, n);
	j = 0;
	while (j < n)
	{
		printf("%d", va_arg(note, int));
		if (j != (n - 1) && separator != NULL)
			printf("%s", separator);
		j++;
	}
	printf("\n");
	va_end(note);
}
