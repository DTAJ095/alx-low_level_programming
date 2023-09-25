#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end
 * of a listint_t list.
 * @head: the pointer to the head of the list
 * @n: the node's value
 *
 * Return: the address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *tmp;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (*head != NULL)
	{
		new_node->next = NULL;
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new_node;
	}
	else
	{
		new_node->next = *head;
		*head = new_node;
	}

	return (new_node);
}
