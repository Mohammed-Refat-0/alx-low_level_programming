#include "dog.h"
#include <stdlib.h>
/**
 * *_strcpy - copies the string pointed to by src to dest
 * @dest: pointer to the buffer
 * @src: string to be copied
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int length = 0;

	while (src[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
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
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (length2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
