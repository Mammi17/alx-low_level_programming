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
	else if (i == n - 1)
		return (1);
	else if (n == 0 || n == 1)
		return (0);
	else if (n % i == 0)
		return (1);
	else
		return (0);
	return (is_prime_number(n));
}
