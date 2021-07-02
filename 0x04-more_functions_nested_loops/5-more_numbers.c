#include "holberton.h"
/**
 * more_numbers - function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 * Return: Void
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 15; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
			{	
				_putchar(j / 10 + '0');
			}
			_putchar(j % 10 + '0');
		}
	_putchar('\n');
	}
}