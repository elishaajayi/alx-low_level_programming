#include "function_pointers.h"

/**
* print_name - function that prints a name
* @name: the name to print
* @f: pointer to the function to call for printing name
* Return: void as in none
*/
void print_name(char *name, void (*f)(char *))
{
	void (*f_ptr)(char *) = f;

	/* Always check for NULL */
	if (name != NULL && f_ptr != NULL)
		f_ptr(name);
}
