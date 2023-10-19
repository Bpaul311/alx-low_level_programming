#include <stdio.h>
#include "lists.h"
void print_message(void) __attribute__((constructor));
/**
 * print_message - it prints a message and is called b4 main
 * return: Nothing
 */
void print_message(void)
{
	 printf("You're beat! and yet, you must allow,\n");
	 printf("I bore my house upon my back!\n");
}

