#include "holberton.h"
/**
 * _strchr - Function that locates a char
 * in a string
 * @s: the string that is inputted
 * @c: the char we are looking for
 * Return: Char
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (s[i] == c)
		return (s + i);
	else
		return ('\0');
}
