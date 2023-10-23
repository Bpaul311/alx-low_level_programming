#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at a specified position
 * in a listint_t linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @index: The index of the node to be deleted (starting at 0).
 *
 * Return: 1 if the deletion succeeded, or -1 if it failed.
 * If it's not possible to delete
 * the node at the specified index, it returns -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *prev = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (temp != NULL && i != index)
	{
		i++;
		prev = temp;
		temp = temp->next;
	}

	if (i == index && temp != NULL)
	{
		prev->next = temp->next;
		free(temp);
		return (1);
	}

	return (-1);
}
