#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: Always 0 (Success)
 *
 * Description: This program prints all the command-line arguments it receives.
 * Each argument is printed on a separate line,including the first one,and each
 * line is terminated with a new line character.
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
