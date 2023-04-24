#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument
 * @argv: an argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *num1, *num2;
	int *str, i, j, b = 0, ln1, ln2, c, n1, n2;

	if (argc != 3)
	{ printf("Error\n"), exit(98); }
	num1 = argv[1], num2 = argv[2];
	j = 0;
	while (num1[j] != '\0')
	{
		if (!digit(num1[j]))
		{ printf("Error\n"), exit(98); }
		j++; } j = 0;
	while (num2[j] != '\0')
	{
		if (!digit(num2[j]))
		{ printf("Error\n"), exit(98); }
		j++; }
	ln1 = length(num1), ln2 = length(num2), c = ln1 + ln2 + 1;
	str = malloc(sizeof(int) * c);
	if (str == NULL)
		return (1);
	for (j = 0; j < c; j++)
		str[j] = 0;
	for (ln1 -= 1; ln1 >= 0; ln1--)
	{ n1 = num1[ln1] - '0', i = 0;
		for (ln2 = length(num2) - 1; ln2 >= 0; ln2--)
		{ n2 = num2[ln2] - '0';
			i += str[ln1 + ln2 + 1] + (n1 * n2), str[ln1 + ln2 + 1] = i % 10,i /= 10; }
		if (i > 0)
			str[ln1 + ln2 + 1] += i; }
	for (j = 0; j < c - 1; j++)
	{
		if (str[j])
			b = 1;
		if (b)
			_putchar(str[j] + '0'); }
	if (!b)
		_putchar('0');
	_putchar('\n'),	free(str);
	return (0);
}

/**
 * digit - check the code
 * @s: integer
 * Return: 1 or 0
 */
int digit(int s)
{
	if (s >= 48 && s <= 57)
		return (1);
	else
		return (0);
}

/**
 * length - returns length of the string
 * @c: a pointer
 * Return: integer
 */
int length(char *c)
{
	int j = 0;

	while (c[j] != '\0')
		j++;
	return (j);
}
