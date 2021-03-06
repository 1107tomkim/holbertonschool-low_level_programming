#include "lists.h"
/**
 * add_dnodeint - Function that adds a new node
 * at the beginning of a list
 * @head: first node of list
 * @n: int value of element to add
 * Return: NULL or new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->next = NULL;
	new_node->n = n;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	new_node->next = *head;
	*head = new_node;
	new_node->next->prev = new_node;
	return (new_node);
}
