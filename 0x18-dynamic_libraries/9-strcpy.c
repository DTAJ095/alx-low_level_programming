#include "main.h"

/**
 * *_strcpy - Copies a string pointed by src including
 * the terminating byte (\0) to the buffer
 * pointed to by dest
 * @src: the source
 * @dest: the destination
 *
 * Return: The pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i;

	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
