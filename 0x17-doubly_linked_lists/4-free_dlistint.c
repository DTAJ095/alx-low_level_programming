#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the head
 *
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
