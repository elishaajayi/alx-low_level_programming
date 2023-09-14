#include "main.h"

/**
* _isupper - function to check uppercase or lowercase
* @c: ascii value of the parameter
* Return: 1 for uppercase and 0 for anything else
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
