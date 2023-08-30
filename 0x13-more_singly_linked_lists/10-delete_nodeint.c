#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes a node at a specified index in a LL.
 * @head: Pointer to a pointer to the first node.
 * @index: Index of the node to be deleted (starting at 0).
 * Return: 1 if successful, -1 if not (e.g., empty list or index out of bounds)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *previous = *head;
	unsigned int i;

	if (head == NULL)
		return (-1);

	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}

	for (i = 0; previous != NULL && i < index - 1; i++)
		previous = previous->next;

	if (previous == NULL || previous->next == NULL)
		return (-1);

	current = previous->next;
	previous->next = current->next;
	free(current);

	return (1);
}

