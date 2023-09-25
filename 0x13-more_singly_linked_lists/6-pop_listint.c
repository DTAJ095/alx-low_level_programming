#include "lists.h"

/**
 * pop_listint - function that deletes the head node of
 * a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: a pointer to the pointer to the head of the list
 *
 * Return: Nothing
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int del;

	if (*head == NULL)
		return (0);
	tmp = *head;
	del = (*head)->n;
	*head = (*head)->next;
	free(tmp);

	return (del);
}
