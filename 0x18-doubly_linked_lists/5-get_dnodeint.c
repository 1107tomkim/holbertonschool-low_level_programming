#include "lists.h"
/**
 * get_dnodeint_at_index - Function that returns
 * the nth node of list
 * @head: First node
 * @index: index of node
 * Return: Node index position
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while ((head) && count < index)
	{
		head = head->next;
		count++;
	}
	if (count < index)
		return (NULL);
	return (head);
}
