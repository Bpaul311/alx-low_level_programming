#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * and returns its data.
 * @head: Pointer to a pointer to the head of the list.
 *
 * If the linked list is empty, it returns 0.
 * Otherwise, it removes the head node and returns its data (n).
 * Return: The data (n) of the removed head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int value;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	value = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (value);
}
