#include "holberton.h"
/**
 * _pow_recursion - Function that returns the
 * value of x raised to the power of y
 * @x: first int being tested
 * @y: second int being tested
 * Return: -1 if y is lower than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);

	y--;
	return (x * _pow_recursion(x, y));
}
