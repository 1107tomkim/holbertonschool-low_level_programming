#include "holberton.h"
/**
 * print_alphabet - function to print all letters in lowercase
 * return value is none since its void
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
