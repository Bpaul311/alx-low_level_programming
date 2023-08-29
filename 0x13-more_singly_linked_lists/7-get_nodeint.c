#include "lists.h"
#include<stdlib.h>
/**
 * get_nodeint_at_index - Retrieves a node at a specific index from a list.
 * @head: Pointer to the head of the list.
 * @index: The index of the node to retrieve.
 *
 * Return: Pointer to the node at the specified index, or NULL if not found.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i = 0;
	listint_t *current = head;

	if (head == NULL) /* Checking for empty list */
		return (NULL);

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	/*When the counter is greater than the index its out of bounds*/
	return ((i <= index) ? current : NULL);
}
