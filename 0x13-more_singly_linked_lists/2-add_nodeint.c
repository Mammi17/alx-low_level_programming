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
	return (ncurrent);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint(&head, 0);
    add_nodeint(&head, 1);
    add_nodeint(&head, 2);
    add_nodeint(&head, 3);
    add_nodeint(&head, 4);
    add_nodeint(&head, 98);
    add_nodeint(&head, 402);
    add_nodeint(&head, 1024);
    print_listint(head);
    return (0);
}
