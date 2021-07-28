#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - Function that executes
 * a function given as a parameter on each
 * element of an array
 * @array: Array being called
 * @size: Size of the array
 * @action: A pointer to the function
 * Return: Void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
}
