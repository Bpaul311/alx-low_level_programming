#include <stdlib.h>

/**
 * alloc_grid - Allocate memory for a 2-dimensional grid of integers.
 * @width: The width (number of columns) of the grid.
 * @height: The height (number of rows) of the grid.
 *
 * Description:
 * The alloc_grid function dynamically allocates memory for a 2-dimensionalgrid
 * of integers with the specified 'width' and 'height'.Each element of the grid
 * is initialized to 0. If 'width' or 'height' is 0 or negative, the function
 * returns NULL. If memory allocation fails, it also returns NULL.
 *
 * Return:
 * On success, alloc_grid returns a pointer to the allocated grid of integers.
 * Each element of the grid is initialized to 0. The grid can be accessed as a
 * 2-dimensional array. When no longer needed, the allocated memory should be
 * freed using the free function. If 'width' or 'height' is 0 or negative,or if
 * memory allocation fails, it returns NULL.
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int i, j;

	/* Check if the width or height are less or equal to 0 */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allocate memory for rows */
	a = (int **)malloc(sizeof(int *) * height);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		/* Allocate memory for columns */
		a[i] = (int *)malloc(sizeof(int) * width);

		if (a[i] == NULL)
			return (NULL);

		for (j = 0; j < width; j++)
			a[i][j] = 0;
	}

	return (a);
}
