#include "main.h"
#include <stdlib.h>

/* Prototype */
int num_char(char *c);

/**
 * argstostr - function to concatenate parameters given
 * @ac: number of arguments
 * @av: the arguments given
 * Return: NULL for fail or concatenated arguments
 */
char *argstostr(int ac, char **av)
{
	int i, a = 0, b = 0;
	int j;
	char *s;

	if (ac == 0 || av == NULL)
		return (0);

	for (i = 0; i < ac; i++)
	{
		a += num_char(av[i]);
	}

	s = malloc(a + 1 + ac);

	if (s == NULL)
		return (0);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < (num_char(av[i])); j++)
		{
			s[b] = av[i][j];
			b++;
		}
		s[b] = '\n';
		b++;
	}

	s[b] = '\0';

	return (s);
}

/**
 * num_char - counts number of char
 * @c: string to count
 * Return: number of char.
 */

int num_char(char *c)
{
	int i = 0;

	while (c[i])
		i++;

	return (i);
}
