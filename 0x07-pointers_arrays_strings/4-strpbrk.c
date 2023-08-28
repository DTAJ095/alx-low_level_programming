#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The string
 * @accept: The accepted string
 *
 * Return: Pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *ptr;

	for (i = 0; s[i] > '\0'; i++)
	{
		for (j = 0; accept[j] > '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				ptr = &s[i];
				return (ptr);
			}
		}
	}
	return (0);
}
