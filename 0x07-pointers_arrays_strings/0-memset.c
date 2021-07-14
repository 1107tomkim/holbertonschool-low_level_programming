#include "holberton.h"
/**
 * _memset - function that fills memory with
 * constant byte.
 * @s: Char pointer value
 * @b: Char pointer containing value to change
 * @n: Int value for size to change
 * Return: Char pointer value.
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n-- > 0)
	{
		s[n] = b;
	}
	return (s);
}
