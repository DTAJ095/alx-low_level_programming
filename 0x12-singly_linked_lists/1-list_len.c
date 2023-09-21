#include "lists.h"

/**
 * list_len - returns the number of elements in linked list_t list
 * @h: the singly linked list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int nbelem;

	nbelem = 0;

	while (h != NULL)
	{
		h = h->next;
		nbelem++;
	}
	return (nbelem);
}
