#include <stdio.h>
#include "main.h"
/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: Always 0 (Success)
 *
 * Description: This program counts and prints the number of arguments
 * passed into it. It displays the argument count as a number, followed
 * by a new line.
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
