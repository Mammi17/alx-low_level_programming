#include <stdio.h>
#include "hash_tables.h"

/**
  * key_index - create a index for the key in the hash table
  * @size: size of the hash table
  * @key: the key
  * Return: the index of the key
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int cle = 0;

	cle = hash_djb2(key) % size;
	return (cle);
}
