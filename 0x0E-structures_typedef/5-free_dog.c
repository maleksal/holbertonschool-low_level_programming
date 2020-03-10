#include "dog.h"
#include <stdlib.h>
/**
  * free_dog - free space from memory
  * @d: pointer to struct
  * Return: void
  */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return (NULL);

	free(d);
	free(d->name);
	free(d->owner);
}
