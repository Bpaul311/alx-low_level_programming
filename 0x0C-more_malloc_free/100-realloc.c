#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_realloc - reallocates a memory block
 * @ptr: pointer to the previously allocated memory
 * @old_size: size of the allocated memory in bytes
 * @new_size: new size for the memory block in bytes
 *
 * Return: pointer to the reallocated memory block
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
