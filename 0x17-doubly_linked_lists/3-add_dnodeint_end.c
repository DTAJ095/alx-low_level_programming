#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t
 * list
 * @head: pointer to the head
 * @n: the integer to add
 *
 * Return: address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *new_nd;

	new_nd = malloc(sizeof(dlistint_t));
	if (new_nd == NULL)
		return (NULL);

	new_nd->n = n;
	new_nd->next = NULL;

	tmp = *head;

	if (tmp != NULL)
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_nd;
	}
	else
	{
		*head = new_nd;
	}

	new_nd->prev = tmp;

	return (new_nd);
}
