#include "main.h"
#include<stdlib.h>

/**
 * _calloc - allocates the memory for an array
 * @nmemb: number of elements of the array
 * @size: size of the array
 *
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	for (; i < nmemb * size; i++)
	{
		*(array + i) = 0;
	}
	return (array);
}
