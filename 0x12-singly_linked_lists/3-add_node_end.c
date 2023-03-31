#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a list_t
 * @head: pointer
 * @str: a pionter
 * Return: list_t
 */

list_t *add_node_end(list_t **head, const char *str)
{
	size_t a;
	list_t *ncurrent, *point;

	a = 0;
	ncurrent = malloc(sizeof(list_t));
	if (ncurrent == NULL)
		return (NULL);
	ncurrent->str = strdup(str);
	while (str[a])
		a++;
	ncurrent->len = a;
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
