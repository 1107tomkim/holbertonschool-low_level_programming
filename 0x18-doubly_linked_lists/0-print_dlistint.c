#include "lists.h"
/**
 * print_dlistint - Function that prints all elements
 * of a dlist_int list
 * @h: First node of the list
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
