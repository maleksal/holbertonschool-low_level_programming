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
};

void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);

#endif
