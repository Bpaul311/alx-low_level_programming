#include "main.h"
/**
 * get_bit - gets the bit in a integer number at position
 * @n: integer to cycle through
 * @index: the index to check for in n
 * Return: the value of the bit at index or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	i = 1UL << index;

	if ((n & i) != 0)
		return (1);
	if ((n & i) == 0)
		return (0);

	return (-1);
}
