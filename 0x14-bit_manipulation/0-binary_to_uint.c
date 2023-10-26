#include "main.h"
/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 * @b: A pointer to the binary string to be converted.
 *
 * Description:
 *   This function takes a binary string pointed to by 'b' and converts it to
 *   an unsigned integer. It returns the converted number. If the input string
 *   contains any characters other than '0' and '1'
 *   or if 'b' is NULL, it returns 0.
 *
 * Return: The converted number or 0 if the input is invalid
 * (non-binary characters or NULL).
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	unsigned int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
			num = (num << 1) + (b[i] - '0');
		else
			return (0);
		i++;
	}

	return (num);
}

