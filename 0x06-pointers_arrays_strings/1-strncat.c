#include "holberton.h"
/**
 * _strncat - Function that concatenates two strings
 * @dest: Character point being inputted
 * @src: Character point being inputted
 * @n: Int value being inputted
 * Return: Char dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
