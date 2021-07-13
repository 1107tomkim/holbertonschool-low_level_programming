#include "holberton.h"
/**
 * print_square - Function that prints a square
 * followed by a new line.
 * @size: The variable that we are testing
 * Return: Void
 */
void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(35);
			}
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
