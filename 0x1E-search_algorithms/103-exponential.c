#include "search_algos.h"
/**
 * binary_search_s - searches for a value in a sorted array of
 * integers using the Binary search algorithm recursively
 * @array: the array
 * @start: start
 * @end: end
 * @value: the value to search
 *
 * Return: The index where the value is located
 */
int binary_search_s(int *array, size_t start, size_t end, int value)
{
	size_t i, mid;

	if (array == NULL)
		return (-1);

	while (end >= start)
	{
		printf("Searching in array: ");
		for (i = start; i < end; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = start + (end - start) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			end = mid - 1;
		else
			start = mid + 1;
	}
	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of
 * integers using the Exponential search algorithm
 * @array: the array
 * @size: the size of the array
 * @value: the value to search
 *
 * Return: the index where the value os located
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (binary_search_s(array, i / 2, right, value));
}
