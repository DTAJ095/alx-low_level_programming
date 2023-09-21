#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: the pointer to a pointer that point to the head of the list
 * @str: the pointer to the string that will be added as node
 *
 * Return: pointer to the head of the list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;
	int count = 0;

	tmp = malloc(sizeof(list_t));

	if (tmp == NULL)
		return (NULL);

	while (str[count])
		count++;
	tmp->len = count;
	tmp->str = strdup(str);
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}
