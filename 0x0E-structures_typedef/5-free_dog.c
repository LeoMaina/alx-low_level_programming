#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory 
 *
 * @d: pointer to memory allocated
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		;
	}
	else
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
