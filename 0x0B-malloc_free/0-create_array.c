#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array
 * @size: array size
 * @c: first char
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	int i;
	unsigned int len;

	if (size == 0)
		return (NULL);

	len = (*int) malloc(size);
	if (len)
	{
		char *a[len];

		for (i = 0; i < len; i++)
			a[i] = c;
	}
	else
		return (NULL);


	return (a);
}
