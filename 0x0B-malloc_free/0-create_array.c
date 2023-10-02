#include"main.h"
#include<stdlib.h>
/*
 * create_array -Creates an array of characters initialized with a character
 *
 * @size: The size of the array to create.
 * @c: The character to initialize the array with.
 *
 * This function dynamically allocates memory for an array of characters
 * and initializes each element with the character 'c',Returns a pointer to the
 * created array or NULL if memory allocation fails or if size is 0.
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = (char *)malloc(size * sizeof(char));
	if (size == 0 || ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);
}
