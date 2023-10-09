#include <stdlib.h>
#include "dog.h"
/**
 * printdog - Display dog information.
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
