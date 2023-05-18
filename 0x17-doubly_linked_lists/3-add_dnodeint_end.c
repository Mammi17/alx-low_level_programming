#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: a pointer
 * @n: an integer
 * Return: a pointer
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *alpha; *current;

	alpha = NULL;
	current = *head;
	alpha = malloc(sizeof(dlistint_t));
	if (alpha)
	{
		alpha->n = n;
		alpha->next = NULL;
		alpha->prev = NULL;

		if (!(*head))
			*head = alpha;
		else
		{
			while (current->next)
				current = current->next;
			current->next = alpha;
			alpha->prev = current;
		}
	}
	return (alpha);
}
