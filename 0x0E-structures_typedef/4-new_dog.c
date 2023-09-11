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
	int length1 = 0;
	int length2 = 0;
	dog_t *dog;

	if (!name || !owner)
	{
		return (NULL);
	}
	while (name[length1] != '\0')
	{
		length1++;
	}
	while (owner[length2] != '\0')
	{
		length2++;
	}
	dog = malloc(sizeof(dog_t));
	if (!dog)
	{
		return (NULL);
	}
	dog->name = malloc(sizeof(char) * (length1 + 1));
	dog->owner = malloc(sizeof(char) * (length2 + 1));
	if (!dog->owner || !dog->name)
	{
		return (NULL);
	}
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	dog->name[length1 + 1] = '\0';
	dog->owner[length2 + 1] = '\0';
	return (dog);
}
