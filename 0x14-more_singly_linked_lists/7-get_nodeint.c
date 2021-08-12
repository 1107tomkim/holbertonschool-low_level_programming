#include "lists.h"
/**
 * get_nodeint_at_index - function that
 * returns nth node of list
 * @head: Head of node
 * @index: Given index val
 * Return: Index of node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i;

	for (i = 0; i < index && head->next; i++)
		head = head->next;
	if (i < index)
		return (NULL);
	return (head);
}
