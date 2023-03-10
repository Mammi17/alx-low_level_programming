#include "main.h"
/**
 * _puts - prints a string
 * @str: a pointer
 */
void _puts(char *str)
{
	int m;

	for (m = 0; str[m] != '\0'; m++)
	{
		_putchar(str[m]);
	}
	_putchar('\n');
}
