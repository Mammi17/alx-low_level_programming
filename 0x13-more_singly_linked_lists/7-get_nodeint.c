#include "lists.h"
#include <stdio.h>
#include <stlib.h>
/**
 * get_nodeint_at_index - that returns the nth node of a listint_t linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 * Return: a pointer
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;
	listint_t *ncurrent;

	ncurrent = head;
	for (j = 0; ncurrent && j < index; j++)
	{
		ncurrent = ncurrent->next;
	}
	return (ncurrent ? ncurrent : NULL);
}
