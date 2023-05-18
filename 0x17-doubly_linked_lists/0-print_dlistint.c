#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dlistint - prints all elements of a dlistint_t list.
 * @h: head of a doubly linked list
 * Return: a size_t
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *str = h;
	size_t a;
	
	a = 0;
	while (str && str->prev)
		str = str->prev;
	while (str)
	{
		printf("%d\n", str->n);
		a++;
		str = str->next;
	}
	return (a);
}
