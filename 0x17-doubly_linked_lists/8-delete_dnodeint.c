#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - removes the given node
 * @head: pointer
 * @index: integer
 * Return: -1 or 1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int a = 0;
	dlistint_t *point, *del = *head;

	if (*head && head)
	{
		if (index == 0)
		{
			point = *head;
			*head = (*head)->next;
			if (*head)
				(*head)->prev = NULL;
			free(point);
		}
		else
		{
			for (a = 0; a != index && del; a++)
			{
				point = del;
				del = point->next;
			}
			if (a == index && del)
			{
				point->next = del->next;
				if (del->next)
					del->next->prev = point;
				free(del);
			}
			else
				return (-1);
		}
		return (1);
	}
	return (-1);
}
