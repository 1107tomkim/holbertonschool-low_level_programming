#include "search_algos.h"

/**
 * advanced_binary - Searches for a val in a sorted arry of int
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 * Return: index of val, or -1 when not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	return (bhelper(array, value, 0, size - 1));
}

/**
 * bhelper - uses recursion to search for a val
 * @array: array to search 
 * @value: value being searched
 * @low: low bound index
 * @high: high bound index
 * Return: index of found val, or -1 when not found
 */
int bhelper(int *array, int value, size_t low, size_t high)
{
	size_t mid;

	print_array(array, low, high);
	if (high == low && array[low] != value)
		return (-1);

	mid = ((high - low) / 2) + low;
	if (array[mid] == value)
		return (mid);
	if (array[mid] < value)
		return (bhelper(array, value, mid + 1, high));
	if (array[mid] > value)
		return (bhelper(array, value, low, mid - 1));
	return (-1);
}

/**
 * print_array - prints array
 * @array: array to print
 * @low: low bound index
 * @hih: high bound index
 */
void print_array(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");
	}
	printf("\n");
}
