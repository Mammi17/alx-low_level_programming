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
	shash_node_t *point = NULL, *new = NULL;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);
	ind = key_index((unsigned char *) key, ht->size);
	point = ht->array[ind];

	if (point && strcmp(key, point->key) == 0)
	{
		free(point->value);
		point->value = strdup(value);
		return (1);
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[ind];
	ht->array[ind] = new;
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
	shash_node_t *ncurrent = NULL, *point = NULL;
	shash_table_t *current = ht;

	if (!ht)
		return;
	point = ht->shead;
	while (point)
	{
		ncurrent = point->next;
		free(point->value);
		free(point->key);
		free(point);
		point = ncurrent;	
	}
	free(current->array);
	free(current);
}

/**
  * shash_table_print_rev - print a sorted hash table in rev
  * @ht: hash table
  * Return: void
  */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *point = NULL;

	if (ht == NULL)
		return;
	point = ht->stail;
	printf("{");
	while (point)
	{
		printf("'%s': '%s'", point->key, point->value);
		point = point->sprev;
		if (point != NULL)
			printf(", ");
	}
	printf("}\n");
}
