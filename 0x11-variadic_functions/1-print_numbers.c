#include "variadic_functions.h"
/**
 * print_numbers - Function that prints
 * numbers followed by a new line
 * @separator: Separator
 * @n: Num of args
 * Return: Void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (separator != NULL)
		{
			if (i < (n - 1))
				printf("%s", separator);
		}
	}
	va_end(list);
	printf("\n");
}
