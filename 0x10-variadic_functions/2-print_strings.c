#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints a series of strings, separated by a specified string
 * @separator: The string to be printed between strings (if not NULL)
 * @n: The number of strings passed to the function
 *
 * Description:
 * This function takes a separator string and an unsigned integer`n`,followedby
 * a variable number of strings. It prints the strings to the standard output,
 * separating them with the provided separator (if it's not NULL). If one of
 * strings is NULL, it prints "(nil)" instead. After printing all the strings,
 * prints a new line.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		char *str = va_arg(args, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(args);
}
