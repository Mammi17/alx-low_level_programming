#include "dog.h"
#include <stdio.h>

/**
 * init_dog - that initialize a variable of type struct dog
 * @d:  a structure
 * @name: a pointer
 * @age: a float
 * @owner: a pointer
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
