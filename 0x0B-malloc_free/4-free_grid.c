#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2-dimensional grid.
 * @grid: pointer to the 2D array.
 * @height: height of the grid.
 *
 * Return; void
 */
void free_grid(int **grid, int height)
{
	int index;

	if (grid == NULL || height <= 0)
	{
		return;
	}
	for (index = 0; index < height; index++)
	{
		free(grid[index]);
	}
	free(grid);
}
