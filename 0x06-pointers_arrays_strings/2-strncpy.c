#include "holberton.h"
/**
 * _strncpy - Function that copies a string
 * @dest: Char pointer being inputted
 * @src: Char pointer being inputted
 * @n: int value being inputted
 * Return: Char dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != 0; i++)
		dest[i] = src[i];

	while (i != n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
