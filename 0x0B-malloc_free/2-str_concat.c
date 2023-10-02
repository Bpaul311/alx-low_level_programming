#include"main.h"
#include<stdlib.h>
/**
 * str_concat - Concatenate two strings into a new allocated space in memory.
 * @s1: The first string to concatenate.
 * @s2: The second string to concatenate.
 *
 * Description:
 * The str_concat function takes two pointers to strings, 's1' and 's2', and
 * concatenates them into a new dynamically allocated string in memory. If 's1'
 * or 's2' is NULL, it treats it as an empty string.The returned pointer points
 * to the newly created string, which contains the contents of 's1' followed by
 * the contents of 's2', and is null-terminated. If memory allocation fails or
 * if any of the input strings is NULL, the function returns NULL.
 *
 * Return:
 * On success, str_concat returns a pointer to the concatenated string. This
 * pointer should be freed with free when no longer needed.If memory allocation
 * fails or if any input string is NULL, it returns NULL.
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j;
	int size1, size2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size1 = size2 = 0;

	/* Calculate the size of the strings separately */
	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;

	/* Allocate memory */
	ptr = (char *)malloc((size1 + size2 + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	/* Copy the characters from s1 */
	for (i = 0; i < size1; i++)
		ptr[i] = s1[i];

	/* Concatenate the characters from s2 */
	for (j = 0; j < size2; j++)
		ptr[i + j] = s2[j];

	/* Null-terminate the concatenated string */
	ptr[i + j] = '\0';

	return (ptr);
}

