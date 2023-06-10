#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - that gives you the index of a key.
 * @key: a key
 * @size: size of table hash
 * Return: a unsigned integer
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);

}
