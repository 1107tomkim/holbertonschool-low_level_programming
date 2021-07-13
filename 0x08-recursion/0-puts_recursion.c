#include "holberton.h"
/**
 * _puts_recursion - Function that pritns a string
 * followed by a new line.
 * @s: The string being inputted
 * Return: Void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s++);
	_puts_recursion(s);
}
