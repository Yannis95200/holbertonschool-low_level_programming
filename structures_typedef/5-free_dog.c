#include "dog.h"
#include "stdio.h"
#include <stdlib.h>
/**
 * free_dog -Frees the memory allocated for a struct dog type structure.
 * @d:Pointer to the dog structure to release
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
