#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name -  function that prints
 * a name.
 * @name: String that holds the name
 * @f: The function pointer
 * Return: Void
 */
void print_name(char *name, void (*f)(char *))
{
	void (*ptr)(char *);

	if (name == NULL || f == NULL)
		return;

	ptr = f;
	ptr(name);
}
