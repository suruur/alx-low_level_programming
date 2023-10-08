#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked- creates array
 * @b: array size
 * Return: any ptr
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b * sizeof(unsigned int));

	if (ptr == NULL)
	{
		fprintf(stderr, "Memory allocation failed\n");
		exit(98);
	}

	return (ptr);
}
