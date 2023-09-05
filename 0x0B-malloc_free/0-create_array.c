#include "main.h"
#include<stdlib.h>
#include<stddef.h>

/**
 * create_array: function that creates an array and initializes it with a specific value
 * @size: the size of the array
 * @c: a character
 *
 * Return: Null if the size is 0 or a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i = 0;

	a = malloc(size * sizeof(char));

	if (a == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	while (i < size)
	{
		a[i] = c;
		i++;
	}
	return (a);
}
