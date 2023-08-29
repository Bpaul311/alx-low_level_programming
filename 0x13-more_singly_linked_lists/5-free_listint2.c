#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - Frees a listint_t linked list.
 * @head: A pointer to a pointer to the head of the list.
 *
 * Description: This function frees all the nodes in a listint_t linked list.
 *              It iterates through the list and frees each node individually.
 *              After freeing all nodes, it sets the head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *next_node;

	while (*head != NULL)
	{
		next_node = (*head)->next; /* Store the next node before freeing */
		free(*head);
		*head = next_node; /* Move to the next node */
	}
	*head = NULL;
}
