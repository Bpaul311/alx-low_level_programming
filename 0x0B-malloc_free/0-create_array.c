#include"main.c"
#include<stdlib.h>
/*
 * _putchar - Writes a character to the standard output.
 *
 * @c: The character to be written.
 *
 * This function writes the character 'c' to the standard output.
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = (char *)malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	else
	{
		for (i = 0; i < size; i++)
			ptr[i] = c;
		return (ptr);
	}
}
