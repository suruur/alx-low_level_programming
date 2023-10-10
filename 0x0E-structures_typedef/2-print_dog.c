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
	if (d != NULL)
	{
		printf("(nil)\n");
	}

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}