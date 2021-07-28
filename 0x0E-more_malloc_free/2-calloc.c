#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - Function that allocates mem
 * for an array using malloc
 * @nmemb: Int value of members
 * @size: Int value of size
 * Return: Void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned int j = nmemb * size;
	char *nptr = NULL;

	if (nmemb == 0 || size == 0)
		return (0);

	nptr = malloc(size * nmemb);

	if (nptr == NULL)
		return (nptr);

	for (i = 0; i < j; i++)
		nptr[i] = 0;

	return (nptr);
}
