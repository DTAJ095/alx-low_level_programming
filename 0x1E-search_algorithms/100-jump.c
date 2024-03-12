#include "search_algos.h"
/**
 * jump_search - searches for a value in a sorted array of
 * integers using the Jump search algorithm
 * @array: the array
 * @size: the size of the array
 * @value: the value to search
 *
 * Return: the index where the value is located
 */
int jump_search(int *array, size_t size, int value)
{
	int idx, m, k, prev;

	if (array == NULL || size == 0)
		return (-1);
	m = (int)sqrt((double)size);
	k = 0;
	idx = prev = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", idx, array[idx]);

		if (array[idx] == value)
			return (idx);
		k++;
		prev = idx;
		idx = k * m;
	} while (idx < (int)size && array[idx] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, idx);

	for (; prev <= idx && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}
	return (-1);
}
