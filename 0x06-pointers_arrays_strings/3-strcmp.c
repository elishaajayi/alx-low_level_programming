#include "main.h"

/* Prototypes for each each string for loop */
int str1(int a, char *s1);
int str2(int b, char *s2);

/**
* _strcmp - function to compare strings
* @s1: the first string
* @s2: the second string
* Return: 0 for success
*/
int _strcmp(char *s1, char *s2)
{
	int a = 0, b = 0, sum1 = 0, sum2 = 0;

	/* I intend to add the up the values of each string and compare */
	while (s1[a] != '\0')
		a++;

	while (s2[b] != '\0')
		b++;

	sum1 = str1(a, s1);
	sum2 = str2(b, s2);

	if (sum1 > sum2)
		return (15);
	else if (sum1 < sum2)
		return (-15);
	else
		return (0);
}

/**
 * str1 - for function of string 1
 * @a: number of characters in s1
 * @s1: string 1
 * Return: sum for each character ascii value
 */
int str1(int a, char *s1)
{
	int i;
	int sum1 = 0;

	for (i = 0; i <= a; i++)
		sum1 = sum1 + s1[i];

	return (sum1);
}

/**
 * str2 - for function of string 2
 * @b: number of characters in s2
 * @s2: string 2
 * Return: sum for each character ascii value
 */
int str2(int b, char *s2)
{
	int j;
	int sum2 = 0;

	for (j = 0; j <= b; j++)
		sum2 = sum2 + s2[j];

	return (sum2);
}

