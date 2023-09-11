#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - create a new dog.
 * @name: name
 * @age: age
 * @owner: owner
 * Return: a pointer to struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));

	if (!dog || !name || !owner)
	{
		return (NULL);
	}
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
