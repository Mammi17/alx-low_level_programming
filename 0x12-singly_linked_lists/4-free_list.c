#include "lists.h"
#include <stdio.h>
/**
 * free_list - that frees a list_t list
 * @head: pointer
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head->next;
		free(head->str);
		free(head);
		head = current;
	}
}
