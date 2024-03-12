#include "search_algos.h"
/**
 * binary_search_recur - searches for a value in a sorted array of
 * integers using the Binary search algorithm recursively
 * @array: the array
 * @start: start
 * @end: end
 * @value: the value to search
 *
 * Return: The index where the value is located
 */
int binary_search_recur(int *array, size_t start, size_t end, int value)
{
	size_t mid, i;

	if (end < start)
		return (-1);

	printf("Searching in array: ");
	for (i = start; i < end; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	mid = start + (end - start) / 2;
	if (array[mid] == value && (mid == start || array[mid - 1] != value))
		return (mid);
	if (array[mid] >= value)
		return (binary_search_recur(array, start, mid, value));
	return (binary_search_recur(array, mid + 1, end, value));
}

/**
 * advanced_binary - searches for a value in a sorted array of
 * integers using the advanced binary search algorithm
 * @array: the array
 * @size: the size of the array
 * @value: the value to search
 *
 * Return: The index where the value os located
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (binary_search_recur(array, 0, size - 1, value));
}
