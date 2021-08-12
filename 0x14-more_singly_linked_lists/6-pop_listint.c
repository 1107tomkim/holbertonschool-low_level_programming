#include "lists.h"
/**
 * pop_listint - function that deletes the head
 * of the node of list
 * @head: Head of node
 * Return: Data stored in the head
 */
int pop_listint(listint_t **head)
{
	listint_t *new;
	unsigned int n;

	new = *head;

	if (new == NULL)
		return (0);
	*head = new->next;
	n = new->n;
	free(new);
	return (n);
}
