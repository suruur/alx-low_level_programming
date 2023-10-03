#include "main.h"
#include <stdlib.h>

/**
 * free_grid - creates array
 * @grid: array size
 * @height: first char
 * Return: void
 */
void free_grid(int **grid, int height)
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
