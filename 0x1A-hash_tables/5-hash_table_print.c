#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_print - that prints a hash table
 * @ht: hash table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned int ind = 0;
	unsigned int a = 0;

	if (ht == NULL)
	{
		return;
	}
	node = ht->array[0];
	putchar('{');
	ind = 0;
	while (ind < ht->size)
	{
		node = ht->array[ind];
		while (node)
		{
			if (a == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			a = 1;
			node = node->next;
		}
		ind ++;
	}
	putchar('}');
	putchar('\n');
}
