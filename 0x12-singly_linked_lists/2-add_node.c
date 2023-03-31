#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list_t
 * @head: pointer
 * @str: a pionter
 * Return: list_t
 */

list_t *add_node(list_t **head, const char *str)
{
	size_t a;
	list_t *ncurrent;

	a = 0;
	while (str[a])
		a++;
	ncurrent = malloc(sizeof(list_t));
	if (ncurrent == NULL)
		return (NULL);
	ncurrent->len = a;
	ncurrent->str = strdup(str);
	ncurrent->next = (*head);
	(*head) = ncurrent;
	return (*head);
}
