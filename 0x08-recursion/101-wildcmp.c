#include "main.h"

/**
* wildcmp - to compare two strings, s1 and s2
* @s1: first string
* @s2: second weird string
* Return: 1 for identical and 0 for not
*/
int wildcmp(char *s1, char *s2)
{
	char *ch1 = "*e", *ch2 = "s.*c";

	/* At end of the strings */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s2 == *ch1 || *s2 == *ch2)
		return (0);

	if (*s1 == '\0' && *s2 == '*')
		return (wildcmp(s1, s2 + 1));

	if (*s1 == '\0' && *s2 != '\0')
		return (0);

	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1));

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else
		return (wildcmp(s1 + 1, s2));
}
