#include "main.h"

/**
 * _strlen_recursion - returns the lenght of a string
 * @s: the string
 *
 * Return: Nothing
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
