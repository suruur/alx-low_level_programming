#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked- creates array
 * @b: array size
 * Return: any ptr
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
