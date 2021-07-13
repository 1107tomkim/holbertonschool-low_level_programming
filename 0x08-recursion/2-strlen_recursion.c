#include "holberton.h"
/**
 * _strlen_recursion - Function that returns the
 * length of a string
 * @s: The string that we are testing
 * Return: 0 if everything works properly
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);

	return (_strlen_recursion(s + 1) + 1);
}
