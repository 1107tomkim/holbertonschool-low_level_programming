#include "function_pointers.h"
/**
 * int_index - Function that searches for an int
 * @array: Array being inputted
 * @size: Size of the Array
 * @cmp: Pointer
 * Return: The array position
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]) != 0)
			return (i);

	return (-1);
}
