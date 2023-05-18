#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: A pointer 
 * @idx: an unsigned integer
 * @n: an integer
 * Return: a structure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h, *point;

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (; idx != 1; idx--)
	{
		current = current->next;
		if (current == NULL)
			return (NULL);
	}
	if (current->next == NULL)
		return (add_dnodeint_end(h, n));
	point = malloc(sizeof(dlistint_t));
	if (point == NULL)
		return (NULL);
	point->n = n;
	point->prev = current;
	point->next = current->next;
	current->next->prev = point;
	current->next = point;
	return (point);
}
