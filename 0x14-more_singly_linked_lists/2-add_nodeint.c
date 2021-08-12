#include "lists.h"
/**
 * add_nodeint - Function that adds
 * a new node at beginning of list
 * @head: Head of node
 * @n: int being passed in
 * Return: New node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->next = *head;
	node->n = n;
	*head = node;
	return (node);
}
