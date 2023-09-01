#include "main.h"

/**
 * _memcpy - Copies a memory area
 * @n: The number of byte to copy
 * @src: The source
 * @dest: The destination
 *
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}

	return (dest);
}
