#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Print dog information.
 *
 * Displays details of a dog, including its name, age, and owner.
 *
 * @d: Pointer to the dog's data.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name =  "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
