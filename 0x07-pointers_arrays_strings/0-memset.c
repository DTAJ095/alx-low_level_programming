#include "main.h"

/**
 * _memset - Fills a memory with a constant byte
 * @n: The number of byte to fill
 * @b: The constant byte
 * @s: The memory area
 *
 * Return: Pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
