#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - creates array
 * @nmemb: array size
 * @size: first char
 * Return: any
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = (size_t)nmemb * size;

	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, total_size);

	return (ptr);
}
