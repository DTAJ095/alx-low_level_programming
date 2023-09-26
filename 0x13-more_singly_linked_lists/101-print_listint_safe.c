#include "lists.h"

/**
 * print_listint_safe -  function that prints a listint_t linked list.
 * @head: the pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, idx = 0;

	nodes = loop_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (; idx < nodes; idx++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}

/**
 * loop_listint_len - Counts the number of unique nodes in a list
 * @head: the pointer to the head of the list
 *
 * Return: number of nodes
 */

size_t loop_listint_len(const listint_t *head)
{
	const listint_t *first_ptr, *second_ptr;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		exit(98);

	first_ptr = head->next;
	second_ptr = (head->next)->next;

	while (second_ptr)
	{
		if (first_ptr == second_ptr)
		{
			first_ptr = head;
			while (first_ptr != second_ptr)
			{
				nodes++;
				first_ptr = first_ptr->next;
				second_ptr = second_ptr->next;
			}

			first_ptr = first_ptr->next;
			while (first_ptr != second_ptr)
			{
				first_ptr = first_ptr->next;
				nodes++;
			}
			
			return (nodes);
		}
		first_ptr = first_ptr->next;
		second_ptr = (second_ptr->next)->next;
	}
	return (0);
}
