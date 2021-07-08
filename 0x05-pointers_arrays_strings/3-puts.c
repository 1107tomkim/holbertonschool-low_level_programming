#include "holberton.h"
/**
 * _puts - function that prints a string
 * followed by a new line
 * @str:  the string that is being tested
 * Return: Void
 */
void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
	str++;
	}
	_putchar('\n');
}
