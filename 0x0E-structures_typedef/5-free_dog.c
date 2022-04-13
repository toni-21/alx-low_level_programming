#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free the dogs
 * @d: pointer to dog struct
 */

void main(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);

		free(d);
	}
}
