#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
/**
 * print_all - prints anything
 * @format: A list of types of arguments passed to the function:
 *   - 'c': Character
 *   - 'i': Integer
 *   - 'f': Float
 *   - 's': String (if the string is NULL, "(nil)" is printed)
 *
 * Description:
 * This function accepts a format string and a variable number of arguments.
 * It prints the arguments according to the format string for proper formatting
 * Unrecognized format specifiers are ignored.
 */
void print_all(const char *const format, ...)
{
	int i = 0;
	char *str, *separator = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", separator, va_arg(list, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(list, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(list, double));
				break;
			case 's':
				str = va_arg(list, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", separator, str);
				break;
			default:
				i++;
				continue;
			}
			separator = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}


