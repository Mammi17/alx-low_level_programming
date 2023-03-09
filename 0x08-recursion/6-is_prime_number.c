#include "main.h"
/**
 * is_prime_number - that returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @n: integer
 * Return: integer
 */

int is_prime_number(int n)
{
	int i;

	i = 2;
	if (n < i)
		return (0);
	else if (n == i)
		return (1);
	return (numb(n, i));
}
/**
 * numb - a recursion
 * @n: integer
 * @i: integer
 * Return: integer
 */
int numb(int n, int i)
{

	if (i == n - 1)
		return (1);
	if (n % i != 0)
		return (numb(n, i + 1));
	if (n % i == 0)
		return (0);
	return (0);
}
