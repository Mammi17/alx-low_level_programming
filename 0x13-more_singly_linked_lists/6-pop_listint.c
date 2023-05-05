#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: a pointer
 * Return: an integer
 */
int pop_listint(listint_t **head)
{
	listint_t *ncurrent;
	int a;

	if (!head || !*head)
		return (0);
	a = (*head)->n;
	ncurrent = (*head)->next;
	free(*head);
	*head = ncurrent;
	return (a);
}
