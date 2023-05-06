#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search
 * Return: a pointer
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *l, *f;

	l = head, f = head
	if (!head)
		return (NULL);
	while (f)
	{
		f = f->next->next;
		l = l->next;
		if (f == l)
		{
			l = head;
			while (l != f)
			{
				l = l->next;
				f = f->next;
			}
			return (f);
		}
	}
	return (NULL);
}
