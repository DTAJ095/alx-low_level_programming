#include "main.h"

/**
 * _islower - Check if a character is in lowercase
 * @c: An input character
 *
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int _islower(int c)
{
	char k;
	int lower = 0;

	for (k = 'a'; k <= 'z'; k++)
	{
		if (c == k)
			lower = 1;
	}

	return (lower);
}
