#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * add_nodeint - adds a new node at the beginning of a listint_t
 * @head: pointer
 * @str: a pionter
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
	return (head);
}
