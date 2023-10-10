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
	d.age = 3.5;
	d.owner = "Bob";
	print_dog(&d);
	

	return (0);
}
