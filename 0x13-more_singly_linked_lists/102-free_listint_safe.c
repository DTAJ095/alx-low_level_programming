#include "lists.h"

/**
 * free_listp1 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listp1(listp_t **head)
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

/**
 * free_listint_safe - frees a linked list.
 * @h: head of a list.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodes = 0;
	listp_t *tmp, *fst_ptr, *scnd_ptr;
	listint_t *current;

	tmp = NULL;
	while (*h != NULL)
	{
		fst_ptr = malloc(sizeof(listp_t));

		if (fst_ptr == NULL)
			exit(98);

		fst_ptr->p = (void *)*h;
		fst_ptr->next = tmp;
		tmp = fst_ptr;

		scnd_ptr = tmp;

		while (scnd_ptr->next != NULL)
		{
			scnd_ptr = scnd_ptr->next;
			if (*h == scnd_ptr->p)
			{
				*h = NULL;
				free_listp1(&tmp);
				return (nodes);
			}
		}

		current = *h;
		*h = (*h)->next;
		free(current);
		nodes++;
	}

	*h = NULL;
	free_listp1(&tmp);
	return (nodes);
}
