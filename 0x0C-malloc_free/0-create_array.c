#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - Function that create an array
 * of chars and intializes it with a specific char
 * @size: Int value of the size
 * @c: The char that is being added to the array.
 * Return: Pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
		return (NULL);

	str = malloc(sizeof(char) * (size));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
