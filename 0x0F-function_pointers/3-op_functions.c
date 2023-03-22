#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - function that performs an addition operation
 * @a: an integer
 * @b: an integer
 * Return: an integer
 */
int op_add(int a, int b)
{
	int c;

	c = a + b;
	return (c);
}

/**
 * op_sub - function that performs a subtraction operation
 * @a: an integer
 * @b: an integer
 * Return: an integer
 */
int op_sub(int a, int b)
{
	int c;

	c = a - b;
	return (c);
}

/**
 * op_mul - function that performs a multiplication operation
 * @a: an integer
 * @b: an integer
 * Return: an integer
 */
int op_mul(int a, int b)
{
	int c;

	c = a * b;
	return (c);
}

/**
 * op_div - function that performs a division operation
 * @a: an integer
 * @b: an integer
 * Return: an integer
 */
int op_div(int a, int b)
{
	int c;

	c = a / b;
	return (c);
}

/**
 * op_mod - function that performs a modulo operation
 * @a: an integer
 * @b: an integer
 * Return: an integer
 */
int op_mod(int a, int b)
{
	int c;

	c = a % b;
	return (c);
}
