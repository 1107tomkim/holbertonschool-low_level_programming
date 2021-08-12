#include "lists.h"
/**
 * free_listint - function that adds
 * a new node at the end of list
 * @head: Head of node
 * Return: Void
 */
void free_listint(listint_t *head)
{
	listint_t *new;
	listint_t *last;

	last = head;
	while (last != NULL)
	{
		new = last->next;
		free(last);
		last = new;
	}
}
