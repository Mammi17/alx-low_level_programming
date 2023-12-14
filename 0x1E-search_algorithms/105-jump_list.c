#include <math.h>
#include "search_algos.h"
/**
 * jump_list - search a single linked list using the jump search method
 * @list: pointer to first node in linked list
 * @size: size of the list (number of nodes)
 * @value: value to be searched for
 * Return: pointe to first node containing value or NULL if not present
 * or the list is empty
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *point = list;
	int a, j;

	if (list == NULL || size == 0)
		return (NULL);
	j = sqrt(size);
	while (point->next != NULL)
	{
		list = point;
		for (a = 0; a < j; a++)
		{
			point = point->next;
			if (point->next == NULL)
				break;
		}
		printf("Value checked at index [%lu] = [%d]\n", point->index, point->n);
		if (point->n >= value)
			break;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", list->index,
	       point->index);
	while (list != NULL && list != point->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}
	return (NULL);
}
