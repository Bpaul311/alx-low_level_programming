#include "lists.h"

/**
 * free_listint - Frees a listint_t linked list.
 * @head: A pointer to the head of the list.
 *
 * Description: This function frees all the nodes in a listint_t linked list.
 *              It iterates through the list and frees each node individually.
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;

	while (current != NULL)
	{
		free(current);
		current = current->next; /* Move to the next node*/
	}
}
