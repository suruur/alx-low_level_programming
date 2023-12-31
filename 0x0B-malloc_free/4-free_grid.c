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
	int i;

	if (height)
	{
		for (i = 0; grid[i]; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
