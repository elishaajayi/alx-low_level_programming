#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* free_dog - free dog structure memory block
* @d: the structure to free
* Return: void as in none
*/
void free_dog(dog_t *d)
{
	/* Always make sure that you know if the memory returns NULL */
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
