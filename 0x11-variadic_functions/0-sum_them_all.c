#include "variadic_functions.h"
/**
 * sum_them_all - Function that returns
 * the sum of all its parameters
 * @n: Number or args
 * Return: The sum of all
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int all = 0;

	if (n == 0)
		return (0);

	va_start(list, n);
		for (i = 0; i < n; i++)
			all += va_arg(list, int);

		va_end(list);
		return (all);
}
