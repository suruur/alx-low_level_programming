#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked- creates array
 * @b: array size
 * Return: array
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);

}
