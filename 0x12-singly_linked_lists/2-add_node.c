#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - Add a new node at the beginning of a linked list.
 * @head: A pointer to a pointer to the head of the list.
 * @str: The string to be duplicated and stored in the new node.
 * Return: The address of the new node, or NULL if it fails.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
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
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
