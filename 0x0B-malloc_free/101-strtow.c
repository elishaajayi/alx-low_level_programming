#include "main.h"
#include <stdlib.h>

/* Prototype */
int count(char *s);

/**
 * strtow - function to split string into words
 * @str: string to split
 * Return: an array of string
 **/
char **strtow(char *str)
{
	int i, j, k, l;
	int n = 0, num = 0;
	char **c;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = count(str);
	if (n == 1)
		return (NULL);
	c = (char **)malloc(n * sizeof(char *));
	if (c == NULL)
		return (NULL);
	c[n - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			c[num] = (char *)malloc(j * sizeof(char));
			j--;

			if (c[num] == NULL)
			{
				for (k = 0; k < num; k++)
					free(c[k]);
				free(c[n - 1]);
				free(c);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				c[num][l] = str[i + l];
			c[num][l] = '\0';
			num++;
			i += j;
		}
		else
			i++;
	}
	return (c);
}

/**
 * count - function to count the number of words in string
 * @s: string to count
 * Return: number of words
 **/
int count(char *s)
{
	int i, n = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				n++;
		}
		else if (i == 0)
			n++;
	}
	n++;
	return (n);
}

