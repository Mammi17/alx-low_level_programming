#include "main.h"
/**
 * evalua - evaluate function sqrt
 * @h: integer
 * @n: integer
 * Return: integer
 */
int evalua(int h, int n)
{
	if (n == 0 || n == 1)
		return (n);
	else if ((h * h) < n)
		return (evalua(h + 1, n));
	else if ((h * h) == n)
		return (h);
	return (-1);
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	int h;

	h = 0;
	if (h < 0)
	{
		return (-1);
	}
	else
	{
		return (evalua(h, n));
	}
}
