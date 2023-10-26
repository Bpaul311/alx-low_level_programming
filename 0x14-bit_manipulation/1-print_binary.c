#include "main.h"
/**
 * print_binary - prints the binary representation of a number to the console
 * @n: the number whose binary representation is to be printed
 *
 * Return: none
 */
void print_binary(unsigned long int n)
{
	unsigned long int i;
	int flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	i = 1UL << (sizeof(unsigned long int) * 8 - 1);
	while (i != 0)
	{
		if ((n & i) != 0)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
		{
			_putchar('0');
		}

		i >>= 1;
	}
}
