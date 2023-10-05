#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max
 * @min: the minimum value (included)
 * @max: the maximum value (included)
 *
 * Return: a pointer to the newly created array, or NULL on failure
 */
int *array_range(int min, int max)
{
	int size, i;
	int *arr;

	size = (max - min) + 1;
	arr = (int *)malloc(size * sizeof(int));

	if (arr == NULL || min > max)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}

