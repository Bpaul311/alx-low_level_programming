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
	listint_t *temp = *head;
	listint_t *new_node;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL || head == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (i < idx - 1 && temp != NULL)
	{
		i++;
		temp = temp->next;
	}

	if (i == idx - 1 && temp != NULL)
	{
		new_node->next = temp->next;
		temp->next = new_node;
		return (new_node);
	}
	else
	{
		free(new_node);
		return (NULL);
	}
}

