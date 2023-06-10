#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_get - that retrieves a value associated with a key.
 * @ht: hash table
 * @key: key string
 * Return: a pointer
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int ind;

	if (!ht || strlen(key) == 0)
		return (NULL);
	ind = key_index((const unsigned char *)key, ht->size);
	node = ht->array[ind];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);

}
