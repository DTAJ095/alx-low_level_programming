#include "lists.h"

/**
 * print_listint_safe - function that prints a listint_t linked list.
 * @head: the pointer to the head of the list
 *
 * Return: tne number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	listp_t *tmp, *fst_ptr, *scnd_ptr;

	tmp = NULL;
	while (head != NULL)
	{
		fst_ptr = malloc(sizeof(listp_t));

		if (fst_ptr == NULL)
			exit(98);

		fst_ptr->p = (void *)head;
		fst_ptr->next = tmp;
		tmp = fst_ptr;

		scnd_ptr = tmp;

		while (scnd_ptr->next != NULL)
		{
			scnd_ptr = scnd_ptr->next;
			if (head == scnd_ptr->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&tmp);
				return (nodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodes++;
	}
	free_listp(&tmp);
	return (nodes);
}

/**
 * free_listp - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listp(listp_t **head)
{
	listp_t *tmp;
	listp_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((tmp = current) != NULL)
		{
			current = current->next;
			free(tmp);
		}
		*head = NULL;
	}
}
