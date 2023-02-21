#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @a: the number
 *
 * Return: Always the value
 */
int print_last_digit(int a)
{
	int digit;

	digit = a % 10;
	if (digit < 0)
		digit *= -1;

	_putchar(digit + '0');
	return (digit);
}
