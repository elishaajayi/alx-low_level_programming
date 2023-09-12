#include "main.h"

/**
* _islower - function to check lowercase
* @c: integer c is the ascii character
* Return: 1 is lowercase, 0 is not
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);
}
