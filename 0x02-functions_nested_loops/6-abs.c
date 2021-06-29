#include "holberton.h"
/**
 * _abs - function that computes the absolute value of an int
 * @n: the integer that is being inputted
 * Return: n if value is positive, -n if value is negative
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
