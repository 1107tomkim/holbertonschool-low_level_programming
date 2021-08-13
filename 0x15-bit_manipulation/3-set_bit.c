#include "holberton.h"
/**
 * set_bit - function that sets the
 * value of a bit to 1 at given index
 * @n: Area to change
 * @index: Index of the bit
 * Return: 1 on success and -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int ui;

	if (index > 64)
		return (-1);

	ui = 1 << index;
	*n = *n | ui;
	return (1);
}
