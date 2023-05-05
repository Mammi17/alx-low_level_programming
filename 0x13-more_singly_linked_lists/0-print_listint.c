#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - prints all the elements of  listint_t
 * @h: pointer
 * Return: size_t
 */

size_t print_listint(const listint_t *h)
{
	size_t a;
	const listint_t *current;

	a = 0;
	current = h;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		a++;
		current = current->next;
	}
	return (a);
}
