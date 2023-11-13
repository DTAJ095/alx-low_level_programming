#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @src: The source string
 * @dest: The destination string
 *
 * Return: Pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int len = 0;
	char *res;

	for (; dest[len] != '\0'; len++)
		;

	res = dest + len;
	while (*src != '\0')
		*res++ = *src++;
	*res = '\0';

	return (dest);
}
