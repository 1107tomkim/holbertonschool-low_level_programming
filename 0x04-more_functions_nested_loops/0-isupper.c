#include "holberton.h"
/**
 * _isupper - a function that checks for uppercase character.
 * @c: the int value we are testing
 * Return: 1, if char is uppercase
 * 0, if char is lowercase
 */
int _isupper(int c)
{
	if (c >= 'A' &&  c <= 'Z')
		return (1);
	else
		return (0);
}
