#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer
 * Return: number of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t a;
	int b;
	listint_t *ncurrent;

	a = 0;
	if (h == NULL || *h == NULL)
		return (0);

	while (*h != NULL)
	{
		b = *h - (*h)->next;
		if (b > 0)
		{
			ncurrent = (*h)->next;
			free(*h);
			*h = ncurrent;
			a++;
		}
		else
		{
			free(*h);
			*h = NULL;
			a++;
		}
	}

	*h = NULL;
	return (a);
}
