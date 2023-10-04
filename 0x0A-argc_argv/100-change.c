#include <stdio.h>
#include <stdlib.h>

/**
 * calculate_minimum_change - Calculates the minimum change for a given amount
 * of cents using the available coin denominations.
 * @cents: The amount of cents to make change for.
 *
 * Return: The minimum number of coins required for the change.
 */
int calculate_minimum_change(int cents)
{
	int minimum_change = 0;

	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
			minimum_change++;
		}
		else if (cents >= 10)
		{
			cents -= 10;
			minimum_change++;
		}
		else if (cents >= 5)
		{
			cents -= 5;
			minimum_change++;
		}
		else
		{
			cents -= 1;
			minimum_change++;
		}
	}

	return (minimum_change);
}
/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Description:
 * This program calculates the minimum number of coins required to make change
 * for a given amount of cents using available coin denominations. It expects
 * exactly one command-line argument representing the amount in cents. If the
 * argument is not provided or is negative, it prints an error message and
 * returns 1. Otherwise, it calculates and prints the minimum number of coins
 * needed for the change.
 *
 * Return: 0 for successful execution, 1 for errors.
 */
int main(int argc, char **argv)
{
	int cents, minimum_change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	minimum_change = calculate_minimum_change(cents);

	printf("%d\n", minimum_change);
	return (0);
}
