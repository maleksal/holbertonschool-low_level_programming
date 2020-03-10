#include "dog.h"
#include <stdlib.h>

#define FREEIF(p) if (p != NULL) free(p) else return;

/**
  * free_dog - free space from memory
  * @d: pointer to struct
  * Return: void
  */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d);
	FREEIF(d->name);
	FREEIF(d->owner);
}
