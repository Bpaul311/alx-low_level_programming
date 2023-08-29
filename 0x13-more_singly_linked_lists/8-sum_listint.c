#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - Sums all the data (n) of a listint_t linked list.
 * @head: A pointer to the head of the list.
 * Return: The sum of all integer values in the list, 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	listint_t *current = head; /* Helps us navigate the list */
	int sum = 0;

	if (head == NULL) /* Checks if the list is empty */
		return (0);

	while (current != NULL)
	{
		sum += current->n; /* Add the value of the current node to sum */
		current = current->next; /* Move to the next node */
	}

	return (sum);
}
