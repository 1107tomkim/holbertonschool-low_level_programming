#include "holberton.h"
/**
 * print_sign - Function that prints the sign of a number
 * @n: integer that is being tested
 * Return: 1 and + if n is greater than zero, 0 and 0 if n is zero
 * and -1 and - if n is less than zero
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n > 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
