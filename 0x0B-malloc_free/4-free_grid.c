#include "main.h"
#include <stdlib.h>

/**
 * free_grid -  frees a 2D array of int
 * @grid: input 2D array of integers to free
 * @height: height of grid
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
