#include "search_algos.h"
/**
 * jump_list - searches for a value in a sorted list of integers
 * using the Jump search algorithm.
 * @list: list of integers
 * @size: The number of nodes in the list
 * @value: the value to search
 *
 * Return: pointer to the first node where value is located
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t idx, k, m;
	listint_t *prev;

	if (list == NULL || size == 0)
		return (NULL);
	m = (size_t)sqrt((double)size);
	idx = 0;
	k = 0;

	do {
		prev = list;
		k++;
		idx = k * m;

		while (list->next && list->index < idx)
			list = list->next;
		if (list->next == NULL && list->index != idx)
			idx = list->index;

		printf("Value checked at index[%d] = [%d]\n", (int)idx, list->n);

	} while (idx < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)prev->index, (int)list->index);

	for (; prev && prev->index <= list->index; prev = prev->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)prev->index, prev->n);
		if (prev->n == value)
			return (prev);
	}

	return (NULL);
}
