#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer
 * @idx: an integer
 * @n: data to insert
 * Return: pointer
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *ncurrent, *point;
	
	ncurrent = *head;
	point = malloc(sizeof(listint_t));
	if (point == NULL || head == NULL)
		return (NULL);
	point->n = n;
	point->next = NULL;
	if (idx == 0)
	{
		point->next = *head;
		*head = point;
		return (point);
	}
	for (j = 0; ncurrent && j < idx; j++)
	{
		if (j == idx - 1)
		{
			point->next = ncurrent->next;
			ncurrent->next = point;
			return (point);
		}
		else
			ncurrent = ncurrent->next;
	}
	return (NULL);
}
