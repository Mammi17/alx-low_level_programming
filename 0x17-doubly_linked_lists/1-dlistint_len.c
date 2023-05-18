#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * dlistint_len - Return list len
 * @h: a structure
 * Return: size_t
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t l;
	int a;

	a = 0;
	l = 0;
	while (h)
	{
		l += 1;
		h = h->next;
		a++;
	}
	return (l);
}
