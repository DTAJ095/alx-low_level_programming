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
	dlistint_t *new_nd, *tmp = *head;

	if (head == NULL)
		return (NULL);

	new_nd = malloc(sizeof(dlistint_t));

	if (new_nd == NULL)
		return (NULL);
	new_nd->n = n;

	if (*head == NULL)
	{
		new_nd->prev = NULL;
		new_nd->next = *head;
		*head = new_nd;
		return (new_nd);
	}

	while (tmp->next)
	{
		tmp = tmp->next;
	}
	new_nd->prev = tmp;
	new_nd->next = NULL;
	tmp->next = new_nd;
	return (new_nd);
}
