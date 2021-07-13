#include "holberton.h"
/**
 * swap_int - Function that swaps the values
 * of two integers.
 * @a: a set of value we are inputting and testing
 * @b: a second set of value we are inputting and testing
 * Return: Void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
