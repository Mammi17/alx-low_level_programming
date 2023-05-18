#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_dnodeint - add new element at beginiing of list
 * @head: pointer
 * @n: an integer
 * Return: a struct
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *a;

	a = malloc(sizeof(dlistint_t));
	if (a == NULL)
		return (NULL);
	a->prev = NULL;
	a->next = *head;
	a->n = n;
	if (*head != NULL)
		(*head)->prev = a;
	*head = a;
	return (a);
}
