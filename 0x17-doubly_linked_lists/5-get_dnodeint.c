#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth mode of the linked list
 *
 * @head: header of the linked list
 * @index: index of the node
 * Return: NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int intervals = 0;

	if (head)
	{
		while (current != NULL)
		{
			if (intervals == index)
				return (current);

			current = current->next;
			++intervals;
		}
	}
	return (NULL);
}
