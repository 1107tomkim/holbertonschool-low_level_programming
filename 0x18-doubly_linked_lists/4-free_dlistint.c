#include "lists.h"
/**
 * free_dlistint - function that frees a
 * dlistint_t list
 * @head: First node of the list
 * Return: Void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = tmp;
	}
}
