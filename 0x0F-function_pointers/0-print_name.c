#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - that print a name
 * @name: a char
 * @f: functio pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
