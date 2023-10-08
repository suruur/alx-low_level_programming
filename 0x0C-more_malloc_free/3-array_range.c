#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates array
 * @min: array size
 * @max: first char
 * Return: array
 */
int *array_range(int min, int max)
{
	int i, size;
	int *arr;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = (int *)malloc(size * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min + 1;

	return (arr);
}
