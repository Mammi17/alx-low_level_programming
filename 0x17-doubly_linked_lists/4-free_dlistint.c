#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: head of the list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	current = NULL;
	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
