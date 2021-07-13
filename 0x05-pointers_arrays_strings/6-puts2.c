#include "holberton.h"
/**
 * puts2 -  function that prings every other character
 * of a string with the first character
 * followed by a newline
 * @str: The string that is being tested
 * Return: Void
 */
void puts2(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		if (index % 2 == 0)
			_putchar(str[index]);
	}
	_putchar('\n');
}
