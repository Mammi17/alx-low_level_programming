#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the table hasth
 * @ht: update hash
 * @key: key identifier
 * @value: value of key
 * Return: 1 or 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *point, *new;
	unsigned long int ind;

	if (!ht || !value || strlen(key) == 0)
		return (0);
	ind = key_index((const unsigned char *)key, ht->size);
	point = ht->array[ind];
	while (point)
	{
		if (strcmp(point->key, key) == 0)
		{
			if (point->value)
				free(point->value);
			point->value = strdup(value);
			if (!point->value)
				return (0);
			return (1);
		}
		point = point->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if (!new->value)
	{
		free(new->key);
		free(new);
		return (0);
	}
	new->next = ht->array[ind];
	ht->array[ind] = new;
	return (1);
}
