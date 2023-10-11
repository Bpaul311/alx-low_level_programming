#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * main - prints its own opcodes
 * Description: Prints opcodes of its main function.
 * Usage: ./main number_of_bytes
 * Arguments: argc (int), argv (char *[])
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Exit status code (int)
 */

int main(int argc, char *argv[])
{
	int num_bytes, i;
	unsigned char *opcode;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	opcode = (unsigned char *) main;
	for (i = 0; i < num_bytes; i++)
	{
		if (i == num_bytes - 1)
		{
			printf("%02hhx\n", opcode[i]);
			break;
		}
		printf("%02hhx ", opcode[i]);
	}
	return (0);
}

