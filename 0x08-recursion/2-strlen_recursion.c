#include "main.h"

/**
 * _strlen_recursion - returns the lenght of a string
 * @s: the string
 *
 * Return: Nothing
 */

int _strlen_recursion(char *s)
{
	int i;

	if (*s > '\0')
	{
		i = _strlen_recursion(s + 1) + 1;
	}
	return (i);
}
