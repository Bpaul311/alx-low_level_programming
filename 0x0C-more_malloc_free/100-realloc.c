#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_realloc - reallocates memory to a new address
 * @ptr: pointer to reallocate
 * @old_size: old size in bytes
 * @new_size: new size in bytes
 *
 * Return: pointer to the newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	int min_size;

	if (new_size == old_size)
		return (ptr);

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	if (old_size < new_size)
		min_size = old_size;
	else if (old_size > new_size)
		min_size = new_size;

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	memcpy(new_ptr, ptr, min_size);

	free(ptr);
	return (new_ptr);
}

