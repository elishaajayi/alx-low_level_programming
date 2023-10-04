#include "main.h"
#include <stdlib.h>

/**
* create_array - function to initialize an array of chars
* @size: of the array
* @c: the character to initialize into the array
* Return: pointer to the array or NULL
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	while (i < size)
	{
		array[i] = c;
		i++;
	}

	return (array);
}
