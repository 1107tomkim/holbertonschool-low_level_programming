#include "holberton.h"
/**
 * flip_bits - function that returns the numb of bits
 * you would need to flip
 * @n: First num
 * @m: Second num
 * Return: Value
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int uli;
	unsigned int val;

	uli = n ^ m;

	val = 0;
	while (uli > 0)
	{
		if ((uli & 1) != 0)
			val++;
		uli = uli >> 1;
	}
	return (val);
}
