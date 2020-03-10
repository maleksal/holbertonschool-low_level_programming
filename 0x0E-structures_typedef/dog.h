#ifndef DOG_H
#define DOG_H


/**
  * struct dog - contains 3 elements
  * @name: pointer to array
  * @age: float
  * @owner: pointer to array
  */

struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

typedef struct dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
