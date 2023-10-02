#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * argstostr - Concatenates all the arguments of your program.
 * @ac: The argument count.
 * @av: The argument vector.
 *
 * Return: A pointer to a new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int counter = 0;
	int len = 0;
	int i = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length */
	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]) + 1; /* +1 for the newline character */
	}

	/* Allocate memory for the new string */
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	/* Concatenation */
	for (i = 0; i < ac; i++)
	{
		strcpy(ptr + counter, av[i]);
		counter += strlen(av[i]);
		ptr[counter++] = '\n'; /* Add newline character */
	}
	ptr[len] = '\0'; /* Null-terminate the string */

	return (ptr);
}

