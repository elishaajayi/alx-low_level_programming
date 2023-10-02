#include "main.h"

/**
* _isalpha - function to check letters
* @c: ascii value of character to check
* Return: 0 for success
*/
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);

	return (0);
}
