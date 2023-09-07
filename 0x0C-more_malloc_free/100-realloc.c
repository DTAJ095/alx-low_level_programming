#include "main.h"
#include<stdlib.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size in bytes of the allocated space for ptr
 * @new_size: size in bytes of the new memory block
 *
 * Return: Void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *fin_location, *fin_ptr;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	fin_location = malloc(new_size);
	fin_ptr = ptr;
	if (old_size > new_size)
	{
		old_size = new_size;
	}
	for (; i < old_size; i++)
		fin_location[i] = fin_ptr[i];
	free(ptr);
	return (fin_location);
}
