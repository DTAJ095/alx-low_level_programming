#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 *
 * Return: Void
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (c)
		return (1);
	return (0);
}
