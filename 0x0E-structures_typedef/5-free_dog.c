#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees up memory designated for a dog structure.
 *@d:Pointer to the dog struct to free.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
