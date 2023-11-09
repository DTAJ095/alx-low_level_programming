#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked
 * dlistint_t list
 * @h: pointer to the head
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
