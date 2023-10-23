#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node at a specified position
 * in a listint_t linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @idx: The index where the new node should be added (starting at 0).
 * @n: Integer value to be added in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 * If it's not possible
 * to add the new node at the specified index,
 * it does not add the node and returns NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *new_node;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	temp = *head;

	while (i != idx && temp != NULL)
	{
		i++;
		temp = temp->next;
	}

	if (i == idx && temp != NULL)
	{
		new_node->next = temp;
		if (idx == 0)
			*head = new_node;
		else
			temp->next = new_node;
		return (new_node);
	}
	else
	{
		free(new_node);
		return (NULL);
	}
}

