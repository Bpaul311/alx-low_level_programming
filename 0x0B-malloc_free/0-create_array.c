#include"main.h"
#include<stdlib.h>
/**
 * create_array - Create an array and assign a character
 * @size: Size of the array
 * @c: Character to assign
 *
 * Description: Creates an array of the given size and initializes each
 * element with the specified character 'c'. Returns a pointer to the array
 * or NULL if memory allocation fails.
 *
 * Return: Pointer to the array, NULL if fail
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
