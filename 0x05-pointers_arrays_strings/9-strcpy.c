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
	char *tmp = dest;

	while (*src)
	{
		*dest++ = *src++;
	}
	return (tmp);
}
