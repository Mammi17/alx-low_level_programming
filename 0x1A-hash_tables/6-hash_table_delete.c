#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_delete - thats deletes a hast table
 * @ht: hash table
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int ind = 0;

	if (ht == NULL)
		return;
	ind = 0;
	while (ind < ht->size)
	{
		while (ht->array[ind])
		{
			free(ht->array[ind]->value);
			free(ht->array[idn]->key);
			free(ht->array[ind]);
			ht->array[ind] = ht->array[ind]->next;
		}
		ind++;
	}
	free(ht->array);
	free(ht);
}
