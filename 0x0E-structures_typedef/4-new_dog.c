#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Create a new dog with copied name and owner.
 *
 * This function creates a new `dog_t` structure with the provided `name`, `age
 * and `owner` values. It ensures that copies of the `name` and `owner` strings
 * are stored to prevent unintentional modification of the original strings.
 *
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: A pointer to the newly created `dog_t` structure, or NULL if memory
 * allocation fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *new_name = malloc(strlen(name) + 1);
	char *new_owner = malloc(strlen(owner) + 1);
	dog_t *n;

	if (new_name == NULL || new_owner == NULL)
	{
		free(new_name);
		free(new_owner);
		return (NULL);
	}
	strcpy(new_name, name);
	strcpy(new_owner, owner);
	n = malloc(sizeof(dog_t));
	if (n == NULL)
	{
		free(new_owner);
		free(new_name);
		free(n);
		return (NULL);
	}

	n->name = new_name;
	n->age = age;
	n->owner = new_owner;

	return (n);
}
