#include "holberton.h"
/**
 * *_strcpy - Function that copies the string pointed to by
 * src, including the terminating null bute
 * to the buffer pointed by dest
 * @dest: Pointer to the dest string
 * @src: Pointer to src string
 * Return: Dest
 */
char *_strcpy(char *dest, char *src)
{
		int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = src[i];

	return (dest);
}
