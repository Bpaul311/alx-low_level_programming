#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 for successful multiplication, 1 for incorrect usage
 *
 * Description:
 * This program multiplies two numbers provided as command-line arguments and
 * prints the result, followed by a new line. It expects exactly two arguments,
 * and if it doesn't receive them, it prints an error message and returns 1.
 * The program can handle numbers that can be stored as integers.
 */
int main(int argc, char **argv)
{
	int num1, num2, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	prod = num1 * num2;
	printf("%d\n", prod);
	return (0);
}
