#include "dog.h"
#include <stdlib.h>

#define C
#define CHECK(p) (p == NULL)
#define LEN(s) (sizeof(s)/sizeof(s[0]))

/**
  * new_dog - create new object for struct
  * @name: array char
  * @age: float
  * @owner: array char
  */

dog_t *new_dog(char *name, float age, char *owner)
{

	unsigned int c;
	dog_t *dog_obj = malloc(sizeof(dog_t));

	/* check for allocation failure */
	if (CHECK(dog_obj))
		return (NULL);

	/* locate space for name */
	dog_obj->name = malloc(LEN(name) + 1);
	
	/* check for failure */
	if (CHECK(dog_obj->name))
	{
		free(dog_obj);
		return (NULL);
	}

	dog_obj->owner = malloc(LEN(owner) + 1);
	
	/* check for failure */
	if (CHECK(dog_obj->owner))
	{
		free(dog_obj->name);
		free(dog_obj);
		return (NULL);
	}
	dog_obj->age = age;
	
	/* assign values */
	for (c = 0; c < LEN(name); c++)
		dog_obj->name[c] = name[c];
	c = 0;
	for ( ; c < LEN(owner); c++)
		dog_obj->owner[c] = owner[c];
	dog_obj->owner[c] = '\0';

	/* return pointer */
	return (dog_obj);
}
