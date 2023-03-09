#include "main.h"
/**
 * is_palindrome - evaluate if is true or false a palindrome
 * @s: pointer
 * Return: integer
 */

int is_palindrome(char *s)
{
	int l, a;

	l = -1;
	if (l < 1)
		return (1);
	if (*s == *(s + l))
	{
		l = l - 2;
		return (is_palindrome(s + 1));
	} 
	a = _strlen_recursion(s);
	a = a - 1;
	return (is_palindrome(s));
	return (0);
}
