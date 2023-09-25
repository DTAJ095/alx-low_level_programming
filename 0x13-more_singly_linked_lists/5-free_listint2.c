#include "lists.h"

/**
 * free_listint2 -  function that frees a listint_t list.
 * @head: a pointer to the pointer to the head of the list
 *
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	tmp = *head;
	while (*head)
	{
		tmp = *head;
		(*head) = (*head)->next;
		free(tmp);
	}
	head = NULL;
}
