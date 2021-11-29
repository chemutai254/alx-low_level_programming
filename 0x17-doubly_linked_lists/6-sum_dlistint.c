#include "lists.h"

/**
 * sum_dlistint - returns usm of all the data
 *
 * @head: the head of the doubly linked list
 *
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
	{
		return (0);
	}

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
