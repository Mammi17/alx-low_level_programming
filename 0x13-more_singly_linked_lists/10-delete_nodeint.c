#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes a node at index a linked list
 * @head: pointer
 * @index: index of the node
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ncurrent, *str;
	unsigned int j = 0;

	ncurrent = *head, str = NULL;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(ncurrent);
		return (1);
	}
	for (j = 0; j < index - 1; j++)
	{
		if (ncurrent == NULL || (ncurrent->next) == NULL)
			return (-1);
		ncurrent = ncurrent->next;
	}
	str = ncurrent->next;
	ncurrent->next = str->next;
	free(str);
	return (1);
}
