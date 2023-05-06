#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_listint - that returns the sum of all the data (n) of a listint_t linked list
 * @head: a pointer
 * Return: an integer
 */

int sum_listint(listint_t *head)
{
	int s = 0;
	listint_t *ncurrent;
	
	ncurrent = head;
	while (ncurrent != NULL)
	{
		s += ncurrent->n;
		ncurrent = ncurrent->next;
	}
	return (s);
}
