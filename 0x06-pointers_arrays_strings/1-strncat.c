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
	int len = 0, i = 0;
	char *res = dest, *start = src;

	while (src[len] != '\0')
	{
		len++;
		src++;
	}

	while (*dest)
	{
		dest++;
	}

	if (n > len)
	{
		n = len;
	}

	src = start;

	for (; i < n; i++)
	{
		*dest++ = *src++;
	}

	*dest = '\0';
	return (res);
}
