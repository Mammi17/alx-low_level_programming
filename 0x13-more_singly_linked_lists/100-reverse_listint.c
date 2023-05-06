#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to the first node
 * Return: pointer
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *av, *ap;

	av = NULL, ap = NULL;
	while (*head != NULL)
	{
		ap = (*head)->next;
		(*head)->next = av;
		av = *head;
		*head = ap;
	}
	*head = av;
	return (*head);
}
