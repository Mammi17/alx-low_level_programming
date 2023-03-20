#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - that create a new dog
 * @name: a pointer
 * @age: a float
 * @owner: a pointer
 * Return: a structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	d = (dog_t *) malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = (char *) malloc((strlen(name) + 1) * sizeof(char));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = (char *) malloc((strlen(owner) + 1) * sizeof(char));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->name = strcpy(d->name, name);
	d->age = age;
	d->owner = strcpy(d->owner, owner);
	return (d);
}
