#include "lists.h"
/**
 * listint_len - Counts the number of elements in a listint_t list.
 * @h: Pointer to the head of the linked list.
 * Return: The number of nodes (elements) in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}
