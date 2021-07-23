#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - Function that returns a pointer
 * to a newly allocated space in mem
 * @str: string that is being inputted to be
 * newly allocated
 * Return: The copied string
 */
char *_strdup(char *str)
{
	char *newstr;
	int i = 0; /* First count */
	int c;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		i++;
	}

	newstr = malloc(sizeof(char) * (i + 1));

	if (newstr == NULL)
		return (NULL);

	for (c = 0; c <= i; c++)
		newstr[c] = str[c];

	return (newstr);
}
