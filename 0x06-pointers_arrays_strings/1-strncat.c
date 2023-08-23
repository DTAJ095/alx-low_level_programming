#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @src: The source
 * @dest: The destination
 * @n: Number of bytes to concatenate
 * Return: Pointer to the resulting dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len;
	char *ptr;

	for (len = 0; dest[len] != '\0'; len++)
	{
		;
	}
	ptr = dest + len;
	while (*src != '\0' && n--)
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
