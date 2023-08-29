#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Pointer to the head of the linked list.
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0; /* initialises a variable to count the nodes */
	const listint_t *current = h; /* initialises a pointer to transverse */

	if (current == NULL)
	{
		return (0);
	}

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next; /* move to the next node */
		count++;
	}

	return (count);
}
