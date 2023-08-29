#include "lists.h"
/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @n: The integer value to store in the new node.
 * Return: The address of the new node, or NULL on failure.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *current = *head;

	/* Check if memory allocation for the new node succeeded */
	if (new_node == NULL)
	{
		return (NULL);
	}

	/* Initialize the data and next pointer of the new node */
	new_node->n = n;
	new_node->next = NULL;

	/* If the list is empty, make the new node the head */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* Find the last node in the list */
	while (current->next != NULL)
	{
		current = current->next;
	}

	/* Update the 'next' pointer of the last node to point to the new node */
	current->next = new_node;

	/* Return the address of the new node */
	return (new_node);
}
