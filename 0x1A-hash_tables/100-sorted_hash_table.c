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
	new->shead = NULL;
	new->stail = NULL;
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
	char *val = NULL;
	shash_node_t *new = NULL, *point = NULL;

	if (!ht || !key || !value)
		return (0);
	else if (strlen(key) == 0)
		return (0);
	val = strdup(value);
	new = malloc(sizeof(shash_node_t));
	if (!val)
		return (0);
	point = ht->shead;
	ind = key_index((unsigned char *)key, ht->size);
	while (point)
	{
		if (strcmp(point->key, key) == 0)
		{
			free(point->value);
			point->value = val;
			return (1);
		}
		point = point->next;
	}
	if (new == NULL)
	{
		free(val);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(val);
		free(new);
		return (0);
	}
	new->value = val;
	new->next = ht->array[ind];
	ht->array[ind] = new;

	if (ht->shead == NULL)
	{
		new->sprev = NULL;
		new->snext = NULL;
		ht->shead = new;
		ht->stail = new;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new->sprev = NULL;
		new->snext = ht->shead;
		ht->shead->sprev = new;
		ht->shead = new;
	}
	else
	{
		point = ht->shead;
		while (point->snext != NULL && strcmp(point->snext->key, key) < 0)
			point = point->snext;
		new->sprev = point;
		new->snext = point->snext;
		if (point->snext == NULL)
			ht->stail = new;
		else
			point->snext->sprev = new;
		point->snext = new;
	}
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
	shash_node_t *point;

	if (!ht || !key)
		return (NULL);
	else if (strlen(key) == 0)
		return (NULL);

	ind = key_index((unsigned char *)key, ht->size);
	if (ind >= ht->size)
		return (NULL);
	point = ht->shead;
	while (point)
	{
		if (strcmp(point->key, key) != 0)
			point = point->next;
	}
	return ((point == NULL) ? NULL : point->value);;
}

/**
 * shash_table_print - prints the contents of a hash table
 * @ht: hash table to print
 * Return: void
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *point = NULL;

	if (ht == NULL)
		return;
	point = ht->shead;
	putchar('{');
	while (point)
	{
		printf("'%s': '%s'", point->key, point->value);
		point = point->next;
		if (point != NULL )
			printf(", ");
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
