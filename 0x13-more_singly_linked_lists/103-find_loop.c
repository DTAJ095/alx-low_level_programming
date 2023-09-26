#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of a list.
 *
 * Return: the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first;
	listint_t *second;

	first = head;
	second = head;
	while (head && first && first->next)
	{
		head = head->next;
		 first = first->next->next;

		if (head == first)
		{
			head = second;
			second =  first;
			while (1)
			{
				first = second;
				while (first->next != head && first->next != second)
				{
					first = first->next;
				}
				if (first->next == head)
					break;

				head = head->next;
			}
			return (first->next);
		}
	}

	return (NULL);
}
