#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - creates array
 * @ptr: array size
 * @old_size: first char
 * @new_size: new sizw
 * Return: array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int csize;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return (NULL);
	}


	csize = (old_size < new_size) ? old_size : new_size;

	memcpy(new_ptr, ptr, csize);

	free(ptr);

	return (new_ptr);
}
