#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_create - creates a hash table
 * @size: unsigned integer
 * Return: a pointer tio the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int a;
	hash_table_t *str;

	str = malloc(sizeof(hash_table_t));
	if (str == NULL)
	{
		return (NULL);
	}
	str->size = size;
	str->array = malloc(sizeof(hash_node_t *) * size);
	if (str->array == NULL)
	{
		return (NULL);
	}
	a = 0;
	while (a < size)
	{
		str->array[a] = NULL;
	}
	return (str);
}
