#include "main.h"
#include <stdlib.h>

/**
* _strdup - function to pointer of allocated space in memory
* @str: string int allocated memory
* Return: pointer to duplicated string and NULL if insufficient memory
*/
char *_strdup(char *str)
{
	int i;
	int len = 0;
	char *dup;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	dup = malloc((len * sizeof(char)) + 1);

	if (dup == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		dup[i] = str[i];
	}

	return (dup);
}
