#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* _realloc - function to reallocate memory block
* @ptr: the previous memory block
* @old_size: the old size in bytes
* @new_size: the new size in bytes
* Return: NULL for fails or ptr for reallocated memory
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	/* Apparently, realloc is allowed to return new memory block */
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size > old_size || ptr != NULL)
	{
		new_ptr = malloc(new_size);

		if (new_ptr == NULL)
			return (NULL);

		memcpy(new_ptr, ptr, old_size);
	}

	free(ptr);
	return (new_ptr);
}
