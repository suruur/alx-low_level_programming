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
	char *nm, *ow;
	dog_t dogg;

	strcpy(nm, name);
	strcpy(ow, owner);

	if (dogg)
	{
		dogg.name = name;
		dogg.age = age;
		dogg.owner = owner;
	}
	else
		return (NULL);

	return (dogg);
}
