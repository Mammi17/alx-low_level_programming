#include "lists.h"
#include <stdio.h>
/**
 * free_listint2 - that frees a listint_t list
 * @head: pointer
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}
	head = NULL;
}
