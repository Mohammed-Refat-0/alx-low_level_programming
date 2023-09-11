#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - a function that intialize the data of dog struct
 * @d : ptr to sog struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
	{
		d = malloc(sizeof(struct(dog)));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
