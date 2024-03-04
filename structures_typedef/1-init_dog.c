#include "dog.h"

/**
 *init_dog - initialize a var of struct dog
 *@d: variable type dog
 *@name: entry char
 *@age: entry float
 *@owner: entry char
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

