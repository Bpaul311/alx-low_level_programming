#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Description: Prints the name of the executable.
 *
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
