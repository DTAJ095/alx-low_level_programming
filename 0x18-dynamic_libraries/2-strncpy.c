#include "main.h"

/**
 * _strncpy - Copies a string
 * @src: the source
 * @dest: the destination
 * @n: the number of bytes to copy
 *
 * Return: Result
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
