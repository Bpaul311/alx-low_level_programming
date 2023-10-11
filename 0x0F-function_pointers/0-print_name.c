#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Print a name using a provided printing function.
 *
 * @name: A pointer to a character string (the name to be printed).
 * @f: A function pointer to a function that takes a char* as an argument.
 *      This function is responsible for printing the name.
 *
 * Return: Nothing (void)
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

