#include "lists.h"

/**
 * free_dlistint - frees a list
 *
 * @head: head of the node
 * Return: exit success
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head, *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
