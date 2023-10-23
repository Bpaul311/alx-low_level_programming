#include <stdlib.h>
#include "lists.h"
/**
 * free_listint- Frees a linked list of type listint_t.
 * @head: Pointer to the head of the list.
 *
 * This function frees all the nodes in a linked list of type listint_t.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
