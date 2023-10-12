#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of its parameters
 * @n: The number of parameters to sum
 *
 * Description:
 * This function takes an unsigned integer `n` and a variable number of args.
 * It calculates and returns the sum of all the provided parameters.
 *  Return: The sum of the provided parameters, or 0 if `n` is 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int sum = 0, i;

	va_start(args, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
