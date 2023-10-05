#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated with malloc
 * @old_size: the size, in bytes, of the old memory block
 * @new_size: the new size, in bytes, of the new memory block
 *
 * Return: a pointer to the newly allocated memory block, or NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	char *dst, *src;
	unsigned int i;

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	dst = (char *)new_ptr;
	src = (char *)ptr;

	for (i = 0; i < old_size && i < new_size; i++)
		dst[i] = src[i];

	free(ptr);

	return (new_ptr);
}

