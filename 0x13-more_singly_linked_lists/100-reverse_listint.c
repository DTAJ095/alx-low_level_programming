#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: a pointer to the pointer to the head of the list
 *
 * Return: Pointer to the first node of the revresed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead, *end;

	if (head == NULL || *head == NULL)
		return (NULL);
	end = NULL;

	while ((*head)->next != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = end;
		end = *head;
		*head = ahead;
	}

	(*head)->next = end;

	return (*head);
}
