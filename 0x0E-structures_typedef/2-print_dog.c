#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - creates array
 * @d: ptr to dog
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL || d->age == 0.0 || d->owner == NULL)
	{
		printf("(nil)\n");
	}

	printf("Name: %s\nAge: %6f\nOwner: %s\n", d->name, d->age, d->owner);
}
