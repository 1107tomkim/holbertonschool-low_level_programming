#include "lists.h"
/**
 * free_listint2 - Function that
 * frees a listint list
 * @head: Head of node
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	listint_t *new;

	if (head == NULL)
		return;

	while (*head)
	{
		new = *head;
		*head = (*head) ->next;
		free(new);
	}
	head = NULL;
}
