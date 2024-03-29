#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint - adds a new node at the beginning of a listint_t
 * @head: pointer
 * @n: an integer
 * Return: list_t
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ncurrent;

	ncurrent = malloc(sizeof(listint_t));
	if (ncurrent == NULL)
		return (NULL);
	ncurrent->n = n;
	ncurrent->next = (*head);
	(*head) = ncurrent;
	return (ncurrent);
}
