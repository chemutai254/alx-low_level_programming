#include "lists.h"

/**
 * print_dlistint - prints doubly linked list
 * @h: head
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int value = 0;

	while (h)
	{
		printf("%d\n", h->n);
		value++;
		h = h->next;
	}
	return (value);
}
