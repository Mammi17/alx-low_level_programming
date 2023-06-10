#include <stdio.c>
#include "hash_tables.h"

/**
  * hash_djb2 - A hash function implementing the djb2 algorithm.
  * @str: constant character
  * Return: unsigned integer
  */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int djb;
	int a;

	djb = 5381;
	while (a = *str++)
	{
		djb = ((djb << 5) + djb) + c;
	}
	return (djb);
}
