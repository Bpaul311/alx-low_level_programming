#include "main.h"

/**
 * get_endianness - checks for the systems endianness
 * Return: 1 on little and 0 on big
 */

int get_endianness(void)
{
	int a = 1;
	char *pointer = (char *)&a;

	if (*pointer == 1)
		return (1);
	return (0);
}
