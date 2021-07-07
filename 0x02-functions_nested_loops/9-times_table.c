#include "holberton.h"
/**
 *
 *
 */
void times_table(void)
{
	int i;
	int j;
	int multi;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{	
			multi = i * j;
			if (multi >= 10)
			{	
				_putchar((multi / 10) + '0');
				_putchar((multi % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (j == 9)
			{
				_putchar(multi + '0');
				_putchar(' ');
			}
			else
			{
				_putchar(multi + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
