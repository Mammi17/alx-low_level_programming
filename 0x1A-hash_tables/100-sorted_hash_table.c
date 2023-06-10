#include <stdio.h>
#include "hash_tables.h"

/**
 * shash_table_create - A function that creates a hash table.
 * @size: Size of hash table.
 * Return: A pointer
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int a = 0;
	shash_table_t *new = NULL;

	new = malloc(sizeof(shash_table_t));
	if (!new)
		return (NULL);
	new->size = size;
	new->array = malloc(sizeof(shash_node_t *) * size);
	if (!new->array)
	{
		free(new);
		return (NULL);
	}
	while (a < size)
	{
		(new->array)[a] = NULL;
		a++;
	}
	return (new);
}

/**
 * shash_table_set - A function that sets a key value pair in the hash table.
 * @ht: A pointer to hash table
 * @key: The key to set
 * @value: The value to set as hash_node's value.
 * Return: 1 or 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ind = 0;
	char *val = NULL, *cle = NULL;
	shash_node_t *new = NULL, *point = NULL;

	if (!ht || !key || !value)
		return (0);
	else if (strlen(key) == 0)
		return (0);
	val = strdup(value);
	cle = strdup(key);
	new = malloc(sizeof(shash_node_t));
	if (!new)
		return (0);
	new->key = cle;
	new->value = val;
	new->next = NULL;
	ind = key_index((unsigned char *)key, ht->size);
	if ((ht->array)[ind] != NULL)
	{
		point = (ht->array)[ind];
		while (point)
		{
			if (strcmp(point->key, cle) == 0)
			{
				free(ht->array[ind]->value);
				ht->array[ind]->value = val;
				free(cle);
				free(new);
				return (1);
			}
			point = point->next;
		}
		point = (ht->array)[ind];
		new->next = point;
		(ht->array)[ind] = new;
	}
	else
		(ht->array)[ind] = new;
	return (1);
}

/**
 * shash_table_get - A function that gets key and value froma hash table.
 * @ht: A pointer to hash table
 * @key: The key to get value
 * Return: a pointer
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int ind = 0;
	char *val = NULL;
	shash_node_t *point;

	if (!ht || !key)
		return (NULL);
	else if (strlen(key) == 0)
		return (NULL);

	ind = key_index((unsigned char *)key, ht->size);
	if ((ht->array)[ind] == NULL)
		return (NULL);
	point = ht->array[ind];
	while (!val)
	{
		if (strcmp(point->key, key) == 0)
			val = point->val;
		point = point->next;
	}
	return (val);
}

/**
 * shash_table_print - prints the contents of a hash table
 * @ht: hash table to print
 * Return: void
 */

void shash_table_print(const shash_table_t *ht)
{
	unsigned long int a = 0, posi = 0;
	shash_node_t *point = NULL;

	if (ht == NULL)
		return;
	putchar('{');
	if (ht)
	{
		for (; a < ht->size - 1; a++)
		{
			if (ht->array[a] != NULL)
				posi = a;
		}

		for (a = 0; a <= posi; a++)
		{
			point = ht->array[a];
			while (point)
			{
				printf("'%s': '%s'", point->key, point->value);
				point = point->next;
				if (a < posi - 1)
					printf(", ");
			}

		}
	}
	printf("}\n");
}

/**
 * shash_table_delete - A function that frees a hash table.
 * @ht: pointer to hash table to delete.
 *Return: void
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int a = 0;
	shash_node_t *current = NULL, *point = NULL;

	if (!ht)
		return;

	if (ht->array)
	{
		for (; a < ht->size; a++)
		{
			if (ht->array[a] != NULL)
			{
				point = ht->array[a];
				while (point)
				{
					current = point->next;
					if (point->value)
						free(point->value);
					if (point->key)
						free(point->key);
					free(point);
					point = current;
				}
			}
		}
		free(ht->array);
	}
	free(ht);
}

/**
  * shash_table_print_rev - print a sorted hash table in rev
  * @ht: hash table
  * Return: void
  */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node = NULL, *point = NULL;
	int a = 0;

	if (ht == NULL)
		return;
	node = ht->stail;

	printf("{");
	point = node;
	if (point != NULL)
	{
		while (point)
		{
			if (!a)
			{
				printf("'%s': '%s'", point->key, point->value);
				a = 1;
			}
			else
				printf(", '%s': '%s'", point->key, point->value);
			point = point->sprev;
		}
	}
	printf("}\n");
}
