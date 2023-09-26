#include "main.h"
#define NULL 0
/**
* _strstr - function to locate a substring
* @haystack: string to be checked
* @needle: the substring to find
* Return: pointer to start of substring in haystack or NULL
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;
	int start;

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
		start = i;

		while (needle[j] != '\0')
		{
			if (haystack[start] == needle[j])
			{
				start++;
				j++;
			}
			else
				break;
		}

		if (needle[j] == '\0')
			return (&(haystack[i]));
		}

		i++;
	}

	return (NULL);
}
