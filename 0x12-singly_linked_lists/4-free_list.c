#include <stdlib.h>
#include "lists.h"
/**
 * free_list - Frees a linked list.
 * @head: A pointer to the head of the list.
 *
 * This function iterates through the linked list and frees the memoryallocated
 * for each node and its associated data, including duplicated strings.
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		free(temp->str);
		free(temp);
		head = head->next;
	}
}
