#include "holberton.h"
/**
 * _strstr - Function that locates a substring
 * @haystack: Array thats being tested
 * @needle: Tester
 * Return: 0, if everyone executes properly.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	if (needle[0] == '\0')
		return (haystack);

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (needle[i + j] == '\0')
				return (haystack + i);

			if (haystack[i + j] != needle[j])
				break;
		}
	}
	return ('\0');
}
