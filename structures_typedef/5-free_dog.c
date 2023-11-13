#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free memory allocate
 * @d: struct at free
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
