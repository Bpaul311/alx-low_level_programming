#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Free the allocated memory for a 2-dimensional grid.
 * @grid: The grid to be freed.
 * @height: The height (number of rows) of the grid.
 *
 * Description:
 * The free_grid function frees the dynamically allocated memory for a
 * 2-dimensional grid of integers. It should be called when the grid is no
 * longer needed to prevent memory leaks.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
