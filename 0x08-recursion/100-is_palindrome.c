#include "main.h"
/**
 * is_palindrome - evaluate if is true or false a palindrome
 * @s: pointer
 * Return: integer
 */

int is_palindrome(char *s)
{
	int a, b;

	a = _strlen_recursion(s);
	b = a - 1;
	return (drome(b, s));
}
/**
 * drome - a recursion
 * @h: integer
 * @s: a pointer
 * Return: an integer
 */
int drome(int h, char *s)
{

	h = -1;
	if (h < 1)
		return (1);
	else if (*s == *(s + h))
	{
		h = h - 2;
		return (drome(h - 2, s + 1));
	}
	return (0);
}
