#include "lists.h"
#include <stdio.h>
/**
 * free_listint - that frees a list_t list
 * @head: pointer
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
