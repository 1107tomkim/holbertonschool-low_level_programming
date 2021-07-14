#include "holberton.h"
/**
 * _strpbrk -
 * @s: The string being checked
 * @accept: character
 * Return: 0, if everything executes properly
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; accept[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
				return (s + i);
		}
	}
	return (0);
}
