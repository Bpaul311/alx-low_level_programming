#include "lists.h"
/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to a pointer to the head of the list.
 *
 * Reverses the given list in-place without using more than one loop,
 * malloc, free, or arrays.
 * Return : a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *prev = NULL;

	while (current != NULL)
	{
		current->next = prev;
		prev = current;
		current = current->next;
	}

	*head = prev;

	return (prev);
}

