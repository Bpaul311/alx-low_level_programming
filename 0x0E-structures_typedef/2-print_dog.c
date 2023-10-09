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
		printf("Name: (nil)");
	if (d->owner == NULL)
		printf("Owner: (nil)");
	printf("Name: %s\n Age: %d\n Owner: %s\n", d->name, d->age, d->owner);
}
