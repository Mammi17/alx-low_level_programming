#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of a dlistint_t linked list
 * @head: a pointer
 * Return: an integer
 */

int sum_dlistint(dlistint_t *head)
{
	int count;

	count = 0;
	while (head)
	{
		count += head->n;
		head = head->next;
	}
	return (count);
}
