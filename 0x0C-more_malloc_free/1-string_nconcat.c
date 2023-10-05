#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings up to n bytes of s2
 * @s1: the first string
 * @s2: the second string
 * @n: the maximum number of bytes from s2 to concatenate
 *
 * Return: a pointer to the newly allocated memory containing the string
 *         or NULL if memory allocation fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned char *result;
	unsigned int len1 = 0, len2 = 0;
	unsigned int len3 = n

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		len3 = len2;

	result = malloc(len1 + len3 + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	strcpy(result, s1);
	strncat(result, s2, len3);

	return (result);
}
