#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates
 * memory using malloc
 * @b: Unsigned int being inputted for
 * amount of memory needed
 * Return: Void
 */
void *malloc_checked(unsigned int b)
{
	void *newspc = NULL;

	newspc = malloc(b);

	if (newspc == NULL)
		exit(98);

	return (newspc);
}


