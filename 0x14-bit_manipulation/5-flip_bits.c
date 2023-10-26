#include "main.h"

/**
 * flip_bits - uses cor to flip bits of two numbers
 * @n: number
 * @m: number;
 * Return: number of bits that needs to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m;
	int count = 0;

	while (flip)
	{
		count += flip & 1;
		flip >>= 1;
	}
	return (count);
}
