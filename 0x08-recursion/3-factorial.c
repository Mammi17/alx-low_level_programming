#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: integer
 * Return: integer
 */

int factorial(int n)
{
	int h;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		h = n * factorial(n - 1);
		return (h);
	}
}
