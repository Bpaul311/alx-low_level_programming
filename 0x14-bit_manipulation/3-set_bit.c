#include "main.h"
/**
 * set_bit - sets a bit in an integer at index position
 * @n: integer to set bit for
 * @index: index to set bit at
 * Return: 1 on success and -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n |= (1UL << index);
	return (1);
}
