#include "main.h"
#include <stdlib.h>

/**
 * free_grid - creates array
 * @grid: array size
 * @height: first char
 * Return: array
 */
void free_grid(int **grid, int height)
{
	int i, j;

	for (i = 0; i < height; i++)
	{
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
		}
	}
}
