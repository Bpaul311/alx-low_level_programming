#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - Returns the sum of all data (n) in a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * If the list is empty, it returns 0. Otherwise, it calculates and returns
 * the sum of all the data (n) in the linked list.
 *
 * Return: The sum of all data (n) in the linked list
 *or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
