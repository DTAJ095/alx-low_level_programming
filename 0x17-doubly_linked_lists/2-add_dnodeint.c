#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a
 * dlistint_t list
 * @head: pointer to the head
 * @n: the integer to be added
 *
 * Return: address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_nd;

	if (head == NULL)
		return (NULL);

	new_nd = malloc(sizeof(dlistint_t));

	if (new_nd == NULL)
		return (NULL);
	new_nd->n = n;
	new_nd->prev = NULL;
	new_nd->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new_nd;
	}
	*head = new_nd;

	return (new_nd);
}
