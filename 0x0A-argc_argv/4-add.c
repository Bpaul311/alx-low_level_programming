#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 for successful addition, 1 for incorrect usage
 *
 * Description:
 * This program adds positive integers provided as command-line arguments and
 * prints the result, followed by a new line. If no numbers are provided, it
 * prints 0. If any of the provided arguments contains symbols that are not
 * digits or is not a valid positive or zero integer, it prints "Error" and
 * returns 1. The program can handle numbers and the addition of all the
 * numbers as integers.
 */
int main(int argc, char **argv)
{
	int sum = 0;
	int i, j;
	int num;
	char *digit;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		digit = argv[i];

		for (j = 0; digit[j] != '\0'; j++)
		{
			if (!isdigit(digit[j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		num = atoi(argv[i]);
		sum += num;
	}

	printf("%d\n", sum);
	return (0);
}
