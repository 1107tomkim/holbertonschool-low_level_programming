#include "variadic_functions.h"
/**
 * print_strings - Function that pritns string
 * followed by a new line.
 * @separator: Separator
 * @n: Num of args
 * Return: Void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	char *ptr;
	unsigned int i;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(list, char *);
		if (ptr != NULL)
			printf("%s", ptr);
		else
			printf("(nil)");

		if (i < (n - 1) && separator)
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}

