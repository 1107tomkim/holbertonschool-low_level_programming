#include "holberton.h"
/**
 * clear_bit - function that sets val
 * of a bit to 0 at given index
 * @n: Num to change
 * @index: index
 * Return: 1 of success -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int ui;

	if (index > 64)
		return (-1);

	ui = 1 << index;
	*n &= ~ui;
	return (1);
}
