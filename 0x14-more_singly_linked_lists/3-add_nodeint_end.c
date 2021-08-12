#include "lists.h"
/**
 * add_nodeint_end - function that adds
 * a new node at the end of list
 * @head: Head of node
 * @n: Int being passed in
 * Return: The new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *first;
	listint_t *new;

	first = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (first->next)
	{
		first = first->next;
	}

	first->next = new;
	return (new);
}
