#include "function_pointers.h"

/**
 * int_index - function to search for an integer
 * @array: array to search through
 * @size: number of elements in the array
 * @cmp: the function to do the search
 * Return: index of the first occurence of -1 for fail
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result, index = 0;
	int (*compare)(int) = cmp;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++, index++)
	{
		result = compare(array[i]);

		if (result == 1)
			return (index);
	}

	return (-1);
}
