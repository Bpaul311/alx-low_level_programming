#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a listint_t linked list.
 * @head: A pointer to the head of the list.
 *
 * Description: This function frees all the nodes in a listint_t linked list.
 *              It iterates through the list and frees each node individually.
 */
void free_listint(listint_t *head)
{
	listint_t *next_node;

	while (head != NULL)
	{
		next_node  = head->next; /* store the next node */
		free(head);
		head = next_node; /* move to the next one */
	}
}
