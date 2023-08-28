#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to a pointer
 * @to: the pointer to a char
 *
 * Return: Pointer
 */

void set_string(char **s, char *to)
{
	*s = to;
}
