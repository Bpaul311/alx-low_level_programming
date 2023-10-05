#include <stdio.h>
#include <stdlib.h>

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
	char *finalstr;
	unsigned int len1, len2, i, j;

	len1 = len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	if (n >= len2)
		n = len2;

	finalstr = malloc(len1 + n + 1);

	if (finalstr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		finalstr[i] = s1[i];

	for (j = 0; j < n; j++)
		finalstr[i + j] = s2[j];

	finalstr[i + j] = '\0';

	return (finalstr);
}
