#include "main.h"
/**
 * is_palindrome - evaluate if is true or false a palindrome
 * @s: pointer
 * Return: integer
 */

int is_palindrome(char *s)
{
	int l, a;

	l = 0;
	if (l < 1)
		return (1);
	if (*s == *(s + l))
	{
		l = l - 2;
		return (is_palindrome(s + 1));
	}
	return (0);
	a = _strlen_recursion;
	a = a - 1;
	return (is_palindrome(s));
}	
