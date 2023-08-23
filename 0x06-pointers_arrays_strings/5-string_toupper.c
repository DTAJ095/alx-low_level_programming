#include "main.h"

/**
 * string_toupper - Changes all lowercase letter of a string to uppercase
 *
 * Return: void
 */

char *string_toupper(char *s)
{
	char *st = s;

	while (*s)
	{
		if ((*s >= 'a') && (*s <= 'z'))
		{
			*s -= 32;
		}
		s++;
	}
	return (st);
}
