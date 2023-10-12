#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints a series of integers
 * @separator: The string to be printed between numbers (if not NULL)
 * @n: The number of integers passed to the function
 *
 * Description:
 * This function takes a separator string and an unsigned integer `n`,
 * followed by a variable number of integers. It prints the integers.
 * separating them with the provided separator (if it's not NULL).
 * After printing all the numbers, it prints a new line.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
