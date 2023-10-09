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

	ptr = (void *) malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
