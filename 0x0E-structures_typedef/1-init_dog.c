#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize dog variable
 * @d: the dog variable to use
 * @name: name of the dog
 * @age: age value
 * @owner: who lost their dog
 * Return: void as in none
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* Always check for fail */
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
