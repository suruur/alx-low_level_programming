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
	char *s;

	if (d == NULL)
	{
		return;
	}

	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	else
	{
		if (d->age <= 0.0)
		{
			s = "(nil)";
		}
		else
		{
			if (d->owner == NULL)
			{
				 d->owner = "(nil)";
			}
			else
			{
				if (d->age == 0)
				{
					printf("Name: %s\nAge: %s\nOwner: %s\n", d->name, s, d->owner);
				}
			}
		}
	}


	if (d->name != NULL && d->age != 0 && d->owner != NULL)
	{
		printf("Name: %s\nAge: %6f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
