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
	int i;
	int length1 = 0;
	int length2 = 0;
	dog_t *dog;

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
	for (i = 0; i < length1; i++)
	{
		dog->name[i] = name[i];
	}
	dog->name[length1] = '\0';
	for (i = 0; i < length2; i++)
	{
		dog->owner[i] = owner[i];
	}
	dog->owner[length2] = '\0';
	dog->age = age;
	return (dog);
}
