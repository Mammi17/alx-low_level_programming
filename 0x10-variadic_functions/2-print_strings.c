#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - functions that prints strings
 * @n: an unsigned int
 * @separator: a pointer constant
 * @...: the remainder of the number of arguments
 * Return: an integer
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list note;
	unsigned int j;
	char *string;

	va_start(note, n);
	j = 0;
	while (j < n)
	{
		string = va_arg(note, char *);
		if (string != NULL)
			printf("%s", string);
		else
			printf("(nil)");
		if (j != (n - 1) && separator != NULL)
			printf("%s", separator);
		j++;
	}
	printf("\n");
	va_end(note);
}
