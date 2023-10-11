#include <stdio.h>
#include "function_pointer.h"
/**
 * array_iterator - Execute a given function on each element of an array.
 *
 * @array: Pointer to an array of integers.
 * @size: Size of the array.
 * @action: Pointer to the function that takes an integer and returns void.
 *
 * This function iterates through the elements of the array and applies the
 * provided action function to each element.
 *
 * Return: None (void)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NUll || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
