#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * index of a listint_t linked list.
 * @head: a pointer to the pointer to the head of the list
 * @index: the index of the node to be deleted
 *
 * Return: 1 if success or -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del_node, *tmp = *head;
	unsigned int nd = 0;

	if (tmp == NULL)
		return (-1);

	if (index == 0)
	{
		(*head) = (*head)->next;
		free(tmp);
		return (1);
	}
	for (; nd < (index - 1); nd++)
	{
		if (tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
	}

	del_node = tmp->next;
	tmp->next = del_node->next;
	free(del_node);
	return (1);
}
