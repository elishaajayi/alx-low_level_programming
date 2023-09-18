#include "main.h"

/**
* rev_string - function to print a string in reverse
* @s: the string to print
* Return: void as in none
*/
void rev_string(char *s)
{
	int i = 0;
	int j, k;
	char temp;

	while (s[i] != '\0')
		i++;

	j = i - 1;

	for (k = 0; j >= 0 && k < j; j--, k++)
	{
		temp = s[k];
		s[k] = s[j];
		s[j] = temp;
	}
}
