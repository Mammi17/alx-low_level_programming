#include "main.h"
/**
 * is_palindrome - evaluate if is true or false a palindrome
 * @s: pointer
 * Return: integer
 */

int is_palindrome(char *s)
{
	int a;

	a = _strlen_recursion(s);
	return (drome(a - 1, s));
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

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer
 * Return: integer
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
