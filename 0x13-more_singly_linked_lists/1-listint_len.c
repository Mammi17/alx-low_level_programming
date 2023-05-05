#include "lists.h"
#include <stdio.h>
/**
 * listint_len - that returns of elements a linked listint_t
 * @h: pointer
 * Return: size_t
 */

size_t listint_len(const listint_t *h)
{
	size_t a;
	const listint_t *current;

	a = 0;
	current = h;
	while (current != NULL)
	{
		current = current->next;
		a++;
	}
	return (a);
}
