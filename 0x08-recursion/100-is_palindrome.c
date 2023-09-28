#include "main.h"

/* Prototypes */
int count_str(char *str);
int check_pal(char *s, int a, int b);

/**
* is_palindrome - function to check if word reads the same both ways
* @s: string to consider
* Return: 1 for palindrome, 0 for not
*/
int is_palindrome(char *s)
{
	int base = count_str(s);

	return (check_pal(s, 0, base - 1));
}

/**
 * count_str - function to get length of string
 * @str: string to count
 * Return: length of string
 */
int count_str(char *str)
{
	/* Base case */
	if (*str == '\0')
		return (0);
	else
		return (1 + count_str(str + 1));
}

/**
 * check_pal - function to check validity of palindrome
 * @s: string to check
 * @a: first index, usually 0
 * @b: last index, from count_str
 * Return: 1 for palindrome, 0 for not
 */
int check_pal(char *s, int a, int b)
{
	if (a >= b)
		return (1);
	else if (s[a] != s[b])
		return (0);
	else
		return (check_pal(s, a + 1, b - 1));
}
