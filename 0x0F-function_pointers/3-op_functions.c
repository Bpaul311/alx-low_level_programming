#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - Computes the sum of two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The sum of 'a' and 'b'.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Calculates the difference between two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The difference between 'a' and 'b'.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Determines the product of two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The product of 'a' and 'b'.
 */
int op_mul(int a, int b)
{

	return (a * b);
}
/**
 * op_div - Performs integer division and returns the quotient.
 * @a: The dividend (numerator).
 * @b: The divisor (denominator).
 *
 * Return: The result of dividing 'a' by 'b' (quotient).
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Computes the remainder of integer division.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The remainder of dividing 'a' by 'b'.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
