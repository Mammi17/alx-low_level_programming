#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: a pointer
 * @index: an integer
 * Return: a pointer
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int a;

	for (a = 0; a != index && head; a++)
	{
		head = head->next;
	}
	if (a == index && head)
		return (head);
	return (NULL);
}
