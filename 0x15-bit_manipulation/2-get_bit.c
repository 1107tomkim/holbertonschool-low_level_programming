#include "holberton.h"
/**
 * get_bit - Function that returns
 * the value of a bit
 * @n: Value to check
 * @index: Starting point
 * Return: Value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	n >>= index;
	if ((n & 1) == 1)
		return (1);
	else
		return (0);
}
