#include "holberton.h"
/**
 * binary_to_uint - Function that converts
 * a binary num to unsigned int
 * @b: The string being tested
 * Return: Values
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int j = 1;
	unsigned int k = 0;

	if (b == NULL)
		return (0);

	while (b[i + 1] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		k += (b[i] - '0') * j;
		j *= 2;
		i--;
	}
	return (k);
}


