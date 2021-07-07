#include "holberton.h"
/**
 * print_alphabet_x10 - printing alphabet 10 times using _putchar only twice
 * return value is void
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char alpha;

	while (count < 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);
		_putchar('\n');
		count++;
	}
}
