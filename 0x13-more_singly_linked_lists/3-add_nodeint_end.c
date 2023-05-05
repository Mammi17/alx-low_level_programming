#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * add_nodeint_end - adds a new node at the end of a list_t
 * @head: pointer
 * @n: an integer
 * Return: listint_t
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ncurrent, *point;

	ncurrent = malloc(sizeof(listint_t));
	if (ncurrent == NULL)
		return (NULL);
	ncurrent->n = n;
	ncurrent->next = NULL;
	point = *head;
	if (point == NULL)
	{
		*head = ncurrent;
		return (ncurrent);
	}
	while (point->next)
		point = point->next;
	point->next = ncurrent;
	return (*head);
}
