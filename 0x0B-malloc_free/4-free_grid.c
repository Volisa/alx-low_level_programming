#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees memory allocated for a 2D array
 * @grid: pointer to 2D array
 * @height: nr of rows in the 2D array
 * The function frees memory allocated to 2D array
 * using the alloc_grid() function.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
	free(grid[i]);
	}
	free(grid);
}
