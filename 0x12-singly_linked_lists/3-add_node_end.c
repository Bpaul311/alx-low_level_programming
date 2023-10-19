#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - Add a new node at the end of a linked list.
 * @head: A pointer to a pointer to the head of the list.
 * @str: The string to be duplicated and stored in the new node.
 *
 * This function creates a new node with a duplicate of the given 'str' and
 * adds it to the end of the linked list. It returns the address of the newnode
 * or NULL if it fails to allocate memory.
 *
 * Return: The address of the new element, or NULL if it fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp;
	char *duplicate;
	unsigned int len;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	duplicate = strdup(str);

	if (duplicate == NULL)
	{
		free(new_node);
		return (NULL);
	}

	len = strlen(duplicate);
	new_node->str = duplicate;
	new_node->len = len;
	new_node->next = NULL;

	temp = *head;

	if (temp == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}
