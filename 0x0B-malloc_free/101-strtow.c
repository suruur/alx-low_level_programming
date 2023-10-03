#include "main.h"
#include <stdlib.h>

/**
 * strtow- creates array
 * @str: array size
 * Return: array
 */
char **strtow(char *str)
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
