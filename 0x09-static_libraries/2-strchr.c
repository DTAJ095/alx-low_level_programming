#include "main.h"
#include<stddef.h>

/**
 * _strchr - Locates a character in a string
 * @s: the string
 * @c: The character to locate
 *
 * Return: pointer to the first occurence of c
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
