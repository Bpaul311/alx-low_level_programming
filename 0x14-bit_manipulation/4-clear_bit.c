#include "main.h"

/**
 * clear_bit - clears a bit of a number at index
 * @n: number
 * @index: index to clear
 * Return: 1 on success or -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if (n == NULL)
		return (-1);
	*n = *n & ~(1UL << index);
	return (1);
}

