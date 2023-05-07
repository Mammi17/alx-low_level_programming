#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint_safe - prints a linked list, safely
 * @head: a  pointer
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	long int b;
	size_t a;

	a = 0;
	while (head)
	{
		b = head - head->next;
		a++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (b > 0)
		{
			head = head->next;
			a++;
		}
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (a);
}
