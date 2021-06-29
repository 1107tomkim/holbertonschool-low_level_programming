#include "holberton.h"
/**
 * _islower - Function that checks for lowercase character
 * @c: the character that is being checked
 * Return: 1 if c is lowercase, otherwise return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
