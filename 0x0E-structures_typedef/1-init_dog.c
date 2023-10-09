#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Initialize a dog structure with name, age, and owner.
 * @d: Pointer to the struct dog to initialize.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog))
	d->name = name;
	d->age = age;
	d->owner = owner;
}
