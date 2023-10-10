#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * new_dog - creates array
 * @name: ptr to dog
 * @age: age
 * @owner: owner
 * Return: dog_t
 */
dog_t new_dog(char *name, float age, char *owner)
{
	dog_t d;

	d = (dog_t *)malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	d->age = age;
	strcpy(d->name, name);
	strcpy(d->owner, owner);

	return (d);
}
