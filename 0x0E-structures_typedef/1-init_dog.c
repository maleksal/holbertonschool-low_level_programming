/**
  * init_dog - initialize struct
  * @d: pointer to struct
  * @name: array of char
  * @age: int
  * @owner: array of char
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;
}
