#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: the pointer to th head of the list
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}
