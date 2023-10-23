#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - Returns the node at a specific index
 * in a listint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: The index of the node, starting at 0.
 *
 * If the node at the specified index does not exist, it returns NULL.
 *
 * Return: Pointer to the node at the specified index,
 * or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	temp = head;
	while (temp != NULL && i != index)
	{
		i++;
		temp = temp->next;
	}

	if (i == index && temp != NULL)
		return (temp);
	else
		return (NULL);
}
