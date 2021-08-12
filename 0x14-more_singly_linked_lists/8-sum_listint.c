#include "lists.h"
/**
 * sum_listint - Function that
 * returns the sum of all data
 * @head: Head of node
 * Return: The sum of all data
 */
int sum_listint(listint_t *head)
{
	int total = 0;

	if (head == NULL)
		return (0);
	while (head->next)
	{
		total += head->n;
		head = head->next;
	}
	total += head->n;
	return (total);
}
