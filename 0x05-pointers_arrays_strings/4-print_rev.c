#include "holberton.h"
/**
 * print_rev - Function that prints a string, in reverse
 * followed by a new line.
 * @s: The string that is being tested
 * Return: Void
 */
void print_rev(char *s)
{
	while (*s == '\0')
	{
		_putchar(*s);
		s--;
	}
_putchar('\n');
}
