#include <stdlib.h>
/**
 * _strdup - Duplicate a string using dynamic memory allocation.
 * @str: The string to duplicate.
 *
 * Description:
 * The _strdup function takes a pointer to a string 'str' and creates a new
 * copy of the string in dynamically allocated memory. It allocates memory
 * for the new string using malloc. If 'str' is NULL or if there is not enough
 * memory available, it returns NULL.
 *
 * Return:
 * On success, _strdup returns a pointer to the duplicated string. This pointer
 * should be freed with free when no longer needed. If str is NULL or memory
 * allocation fails, it returns NULL.
 */
char *_strdup(char *str)
{
	char *ptr;
	int i;
	int size;

	if (str == NULL)
		return (NULL);

	size = 0;

	/* Calculate the size of the string */
	while (str[size] != '\0')
		size++;

	/* Allocate memory */
	ptr = (char *)malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = str[i];

	return (ptr);
}
