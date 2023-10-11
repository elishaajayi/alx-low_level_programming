#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - the structure to be initialized
 * @name: name of dog
 * @age: age of dog
 * @owner: will you keep the dog on a leash
 * Return: dog_t, the structure needed
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *a_dog;
	int len1 = 0, len2 = 0;
	int i, j;

	a_dog = malloc(sizeof(dog_t));

	if (a_dog == NULL)
		return (NULL);

	while (name[len1] != '\0')
		len1++;
	while (owner[len2] != '\0')
		len2++;

	a_dog->name = malloc((len1 + 1) * sizeof(char));
	a_dog->owner = malloc((len2 + 1) * sizeof(char));

	if (a_dog->name == NULL || a_dog->owner == NULL)
	{
		free(a_dog->name);
		free(a_dog->owner);
		free(a_dog);
		return (NULL);
	}

	for (i = 0; i < len1; i++)
		a_dog->name[i] = name[i];
	for (j = 0; j < len2; j++)
		a_dog->owner[j] = owner[j];

	a_dog->name[i] = '\0';
	a_dog->owner[j] = '\0';
	a_dog->age = age;

	return (a_dog);
}
