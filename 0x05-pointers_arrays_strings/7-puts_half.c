#include "holberton.h"
/**
 * puts_half - function that prints half of a string,
 * followed by a new line
 * @str: The string that is being tested
 * Return: Void
 */
void puts_half(char *str)
{
	int index;
	int length;

	length = 0;
	for (index = 0; str[index] != '\0'; index++)
		length++;

	for (index = (length + 1) / 2; index < length; index++)
		_putchar(str[index]);

	_putchar('\n');
}
