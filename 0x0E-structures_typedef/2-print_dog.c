#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print dog'd data
 * @d:pointer to the struct dog.
 */
void print_dog(struct dog *d)
{
	if (!d)
	{
		return;
	}
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
