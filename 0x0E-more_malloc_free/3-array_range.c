#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - Function that creates
 * an array of int
 * @min: Starting value
 * @max: Ending value
 * Return: New ptr with the value
 */
int *array_range(int min, int max)
{
	int i;
	int j = max - min;
	int *nptr;

	if (min > max)
		return (NULL);

	nptr = malloc(sizeof(int) * (j + 1));
	if (nptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
	{
		nptr[i] = min;
	}
	return (nptr);
}
