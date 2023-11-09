#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at a given index
 * @h: pointer to the head
 * @idx: index of the node
 * @n: the node to be added
 *
 * Return: address of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_nd, *tmp= *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
	}

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	new_nd = malloc(sizeof(dlistint_t));

	if (new_nd == NULL)
		return (NULL);

	new_nd->n = n;
	new_nd->next = tmp->next;
	new_nd->prev = tmp;
	tmp->next->prev = new_nd;
	tmp->next = new_nd;

	return (new_nd);
}
