#include "main.h"
#include <stdlib.h>

/* Prototype */
int strlen(char *c);

/**
 * argstostr - function to concatenate parameters given
 * @ac: number of arguments
 * @av: the arguments given
 * Return: NULL for fail or concatenated arguments
 */
char *argstostr(int ac, char **av)
{
	int i, a = 0, k = 0;
	int j;
	char *p;

	if (ac == 0 || av == NULL)
		return (0);

	for (i = 0; i < ac; i++)
	{
		a += strlen(av[i]);
	}

	p = malloc(a + 1 + ac);

	if (p == NULL)
		return (0);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < (strlen(av[i])); j++)
		{
			p[k] = av[i][j];
			k++;
		}
		p[k] = '\n';
		k++;
	}

	p[k] = '\0';

	return (p);
}

/**
 * strlen - counts number of char
 * @c: string to count
 * Return: number of char.
 */

int strlen(char *c)
{
	int i = 0;

	while (c[i])
		i++;
	
	return (i);
}
