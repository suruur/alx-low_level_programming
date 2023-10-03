#include "main.h"
#include <stdlib.h>

/**
 * argstostr - creates array
 * @ac: array size
 * @av: first char
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(size);
	if (arr)
	{
		for (i = 0; i < size; i++)
			arr[i] = c;
	}
	else
		return (NULL);


	return (arr);
}
