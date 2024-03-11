#include "search_algos.h"

/**
 * binary_search -  searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: the array
 * @size: the size of the array
 * @value: the value to search
 *
 * Return: Index where thw value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, start, end;
	int mid;

	if (array == NULL)
		return (-1);
	for (start = 0, end = size - 1; end >= start;)
	{
		printf("Searching in array: ");
		for (i = start; i < end; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = start + (end - start) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid]> value)
			end = mid - 1;
		else
			start = mid + 1;
	}
	return (-1);
}
