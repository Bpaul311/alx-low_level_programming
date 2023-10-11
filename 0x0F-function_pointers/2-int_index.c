#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - Search for an integer in an array using a comparison function.
 *
 * @array: Pointer to an array of integers.
 * @size: Number of elements in the array.
 * @cmp: Pointer to the comparison function that takes an integer and return it
 *
 * This function searches for the first element in the array.
 * does not return 0. It iterates through the elements and applies the cmp.
 * each element.
 *
 * Return: The index of the first matching element, or -1 if no element matches
 * is less than or equal to 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);
		if (result != 0)
			return (i);
	}
	return (-1);
}
