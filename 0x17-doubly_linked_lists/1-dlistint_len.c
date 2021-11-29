#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - returns number of elements in a linked list
 *
 * @h: pointer to a struct
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int value = 0;

	while (h != NULL)
	{
		++value;
		h = h->next;
	}
	return (value);
}
