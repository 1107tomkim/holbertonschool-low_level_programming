#include "lists.h"
/**
 * listint_len - function that returns
 * the number of elements in a list
 * @h: head of node
 * Return: Size of list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
