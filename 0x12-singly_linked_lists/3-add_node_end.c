#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: the pointer to a pointer that point to the head of the list
 * @str: the pointer to the string to be added as node
 *
 * Return: the adress of the nex element  or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp;
	unsigned int count = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	while (str[count])
		count++;
	new_node->len = count;
	new_node->str = strdup(str);
	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = NULL;
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new_node;
	}
	return (new_node);
}
