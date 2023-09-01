#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: Result
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
