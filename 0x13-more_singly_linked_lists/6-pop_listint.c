#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - Removes the head node of a listint_t linked list.
 * @head: A pointer to a pointer to the head of the list.
 *
 * Description: This function removes the first node of a listint_t linked list
 *              and returns its value. If the list is empty, it returns 0.
 *
 * Return: The value stored in the removed head node, or 0 if the list is empty
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
