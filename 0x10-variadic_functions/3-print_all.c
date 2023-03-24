#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - functions that prints anything
 * @format: a pointer constant
 * @...: the remainder of the number of arguments
 * Return: an integer
 */

void print_all(const char * const format, ...)
{
	va_list note;
	unsigned int j = 0, i;
	const char *arg = "cifs";
	char *s = "", *string;

	va_start(note, format);
	while (format && format[j])
	{
		i = 0;
		while (arg[i])
		{
			if (format[j] == arg[i])
			{
				printf("%s", s);
				s = ", ";
			} i++;
		}
		switch (format[j])
		{
			case 'c':
				printf("%c", va_arg(note, int));
				break;
			case 'i':
				printf("%d", va_arg(note, int));
				break;
			case 'f':
				printf("%f", va_arg(note, double));
				break;
			case 's':
				string = va_arg(note, char *);
					if (string == NULL)
					{
						printf("(nil)");
						break;
					}
				printf("%s", string);
				break;
		} j++;
	} printf("\n");
	va_end(note);
}
