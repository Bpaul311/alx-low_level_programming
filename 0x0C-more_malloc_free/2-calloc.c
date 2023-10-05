#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array and initializes it to zero
 * @nmemb: number of elements in the array
 * @size: size of each element in bytes
 *
 * Return: a pointer to the allocated and initialized memory,or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	unsigned int total_size = nmemb * size;

	if (size == 0 || nmemb == 0)
		return (NULL);

	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	/* Initialize the allocated memory to zero */
	for (i = 0; i < total_size; i++)
	{
		((char *)ptr)[i] = 0;
	}

	return (ptr);
}
