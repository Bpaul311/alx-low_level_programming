#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - Frees a linked list of type listint_t and
 *  sets the head to NULL.
 * @head: Pointer to a pointer to the head of the list.
 * This function frees all the nodes in a linked list of type listint_t
 * and sets the head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
	*head = NULL;
}
