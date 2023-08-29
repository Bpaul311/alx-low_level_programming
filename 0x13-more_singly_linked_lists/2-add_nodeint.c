#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @n: The integer value to store in the new node.
 * Return: The address of the new node, or NULL on failure.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	/* Allocate memory for a new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		/* Memory allocation failed */
		return (NULL);
	}

	/* Set the 'n' field of the new node */
	new_node->n = n;

	/* Set the 'next' pointer of the new node */
	new_node->next = *head;

	/* Update the head to point to the new node */
	*head = new_node;

	/* Return the address of the new node */
	return (new_node);
}