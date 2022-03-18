#include "search_algos.h"
/**
 * binary_search - searches for val in sorted array of int
 * @array: array being searched
 * @size: size of array
 * @value: value being searched
 * Return: index of val, else -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t first, middle, last;

	if (array == NULL)
	{
		return (-1);
	}
	first = 0;
	middle = 0;
	last = size - 1;
	while (first <= last)
	{
		printf("Searching in array: ");
		for (i = first; i < last; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[last]);
		middle = (first + last) / 2;
		if (array[middle] > value)
		{
			last = middle - 1;
		}
		else if (array[middle] < value)
		{
			first = middle + 1;
		}
		else
		{
			return (middle);
		}
	}
	return (-1);
}
