#include "main.h"

/**
 * binary_to_uint - function that converts a binary number
 * to an unsigned int.
 * @b: a pointer to a string of 0 and 1 chars
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, base = 1;
	int len;

	if (b == NULL)
		return (0);

	len =0;
	while (b[len] != '\0')
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		num += (b[len] - '0') * base;
		base *= 2;
	}
	return (num);
}
