#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - prints all the elements of  list_t
 * @h: pointer
 * Return: size_t
 */

size_t print_list(const list_t *h)
{
	size_t a;
	const list_t *current;

	a = 0;
	current = h;
	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", current->len, current->str);
		a++;
		current = current->next;
	}
	return (a);
}
