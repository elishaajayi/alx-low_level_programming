#include "function_pointers.h"

/**
 * array_iterator - function to print values of an array
 * @array: array to use
 * @size: size of array in int
 * @action: pointer to function to execute
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	void (*execute)(int) = action;
	size_t i;

	if (array != NULL && execute != NULL)
		for (i = 0; i < size; i++)
			execute(array[i]);
}
