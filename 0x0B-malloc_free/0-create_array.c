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
	int n = size;
	char *array;
	int i = 0;

	if (size == 0)
		return (NULL);

	array = malloc(n * sizeof(char));

	while (i < n)
	{
		array[i] = c;
		i++;
	}

	return (array);
}
