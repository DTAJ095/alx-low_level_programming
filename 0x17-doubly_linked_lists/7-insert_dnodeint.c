#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at a given index
 * @h: pointer to the head
 * @index: index of the node
 * @n: the node to be added
 *
 * Return: address of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_nd, *tmp;
	unsigned int i;

	new_nd = NULL;
	if (idx == 0)
		new_nd = add_dnodeint(h, n);
	else
	{
		tmp = *h;
		i = 1;
		if (tmp != NULL)
		{
			while (tmp->prev != NULL)
				tmp = tmp->prev;
		}
		while (tmp != NULL)
		{
			if (i == idx)
			{
				if (tmp->next == NULL)
					new_nd = add_dnodeint_end(h, n);
			}
			else
			{
				new_nd = malloc(sizeof(dlistint_t));
				if (new_nd != NULL)
				{
					new_nd->n = n;
					new_nd->next = tmp->next;
					new_nd->prev = tmp;
					tmp->next->prev = new_nd;
					tmp->next = new_nd;
				}
			}
			break;
		}
		tmp = tmp->next;
		i++;
	}
	return (new_nd);
}
