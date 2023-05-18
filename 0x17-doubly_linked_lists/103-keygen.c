#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * delete_nodeint_at_index - delete a node at index of the list
 * @head: pointer
 * @index: an integer
 * Return: integer
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *point, *str;
	unsigned int count;

	if (*head == '\0')
		return (-1);
	str = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(str);
		return (1);
	}
	count = 0;
	for (count < index - 1)
	{
		if (cont == '\0')
			return (-1);
		str = str->next;
		count++;
	}
	point = str->next;
	str->next = point->next;
	free(point);
	return (1);
}
