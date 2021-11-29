#include "lists.h"

/**
 * sum_dlistint - returns usm of all the data
 *
 * @head: the head of the doubly linked list
 *
 * Return: 0
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint *current = head;
	int sum = 0;

	if (head)
	{
		while (current != NULL)
		{
			sum += current->n;
			current = current->next;
		}
	}

	return (sum);
}
