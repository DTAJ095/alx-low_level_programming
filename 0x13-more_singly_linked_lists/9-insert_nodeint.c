#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at
 * a given position.
 * @head: a pointer to the pointer to the head of the list
 * @idx: the index where the new node will be added
 * @n: the node's value
 *
 * Return: the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp = *head;
	unsigned int nd = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = tmp;
		*head = new_node;
		return (new_node);
	}
	for (nd = 0; nd < (idx - 1); nd++)
	{
		if (tmp == NULL || tmp->next == NULL)
			return (NULL);
		tmp = tmp->next;
	}

	new_node->next = tmp->next;
	tmp->next = new_node;

	return (new_node);
}
