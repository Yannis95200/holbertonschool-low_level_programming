#include "dog.h"
#include "stdio.h"

/**
 * free_dog -Frees the memory allocated for a struct dog type structure.
 * @d:Pointer to the dog structure to release
 */

void free_dog(dog_t *d)
{
	if (d != NULL)

	free(d->name);
	free(d->age);
	free(d->owner);

	return (0);
}
