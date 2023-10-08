#include "main.h"
#include <stdlib.h>

/**
* _realloc - function to reallocate memory block
* @ptr: the previous memory block
* @old_size: the old size in bytes
* @new_size: the new size in bytes
* Return: NULL for fails or ptr for reallocated memory
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;

	if (new_size > old_size)
		return (ptr);
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = new_size; i < old_size; i++)
		free(ptr + i);

	return (ptr);
}
