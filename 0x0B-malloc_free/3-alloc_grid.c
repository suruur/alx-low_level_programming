#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates array
 * @width: array size
 * @height: first char
 * Return: array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int *w, *h;
	int **arr;

	if (width <= 0 && height <= 0)
		return (NULL);

	w = (int*)malloc(width * sizeof(int));
	h = (int*)malloc(height * sizeof(int));

	if (w && h)
	{
		for (i = 0; i < width; i++)
			for (j = 0; j < height; j++)
				arr[i][j] = 0;
	}
	else
		return (NULL);


	return (arr);
}
