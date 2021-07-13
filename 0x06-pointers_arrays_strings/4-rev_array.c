#include "holberton.h"
/**
 * reverse_array - Function that reverses the content
 * of an array of integers.
 * @a: Int that is being inputted
 * @n: Int that is being inputted
 * Return: Void
 */
void reverse_array(int *a, int n)
{
	int i;
	int j = 0;
	int k[100];

	for (i = n - 1; i >= 0; i--)
	{
		k[j] = a[i];
		j++;
	}

	for (i = 0; i < n; i++)
		a[i] = k[i];
}
