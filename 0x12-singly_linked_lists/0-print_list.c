#include <stdio.h>
#include "lists.h"
/**
 * print_list - Prints a linked list and counts its nodes.
 * @h: A pointer to the head of the list.
 *
 * Returns: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return(0);
	while (h != NULL)
	{
		if (h -> str == NULL)
			printf("[0] (nil)\n");
		else 
			printf("%d %s\n", h -> len, h -> str);
		count++;
		h = h->next;
	}
	return(count);
}

