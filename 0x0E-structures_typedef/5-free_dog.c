#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Remove Dog information.
 *
 * @d: Pointer to the dog's data.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
