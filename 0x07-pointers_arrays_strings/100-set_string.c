#include "main.h"

/**
* set_string - function that sets value of pointer to a char
* @s: pointer to pointer to s
* @to: pointer to 'to'
* Return: void as in none
*/
void set_string(char **s, char *to)
{
	*s = to;
}
