#include <stdio.h>
#include "dog.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	struct dog d;
	d.name = "Poppy";
	d.age = 0;
	d.owner = NULL;
	print_dog(&d);
	print_dog(NULL);

	

	return (0);
}
