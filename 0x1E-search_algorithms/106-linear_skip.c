#include "search_algos.h"
/**
 * linear_skip - searches for a value in a skip list
 * @list: input list
 * @value: value to search in
 * Return: an integer
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *point;

	if (list == NULL)
		return (NULL);
	point = list;
	do {
		list = point;
		point = point->express;
		printf("Value checked at index: ");
		printf("[%d] = [%d]\n", (int)point->index, point->n);
	} while (point->express && point->n < value);
	if (point->express == NULL)
	{
		list = point;
		while (point->next)
			point = point->next;
	}
	printf("Value found between indexes: ");
	printf("[%d] and [%d]\n", (int)list->index, (int)point->index);
	while (list != point->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}
	return (NULL);
}
