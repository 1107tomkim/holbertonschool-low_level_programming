#include "lists.h"
/**
 * dlistint_len - Function that retusn the number
 * of elements in a linked dlistint_t list
 * @h: first node of list
 * Return: count of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
