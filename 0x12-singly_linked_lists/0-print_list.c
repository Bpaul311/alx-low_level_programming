#include <stdio.h>
#include "lists.h"
/**
 * print_list - Print and count singly linked list nodes.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list. If 'h' is NULL, returns 0.
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}

