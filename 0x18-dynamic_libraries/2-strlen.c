#include "main.h"

/**
 * _strlen - Returns the lenght of a string
 * @s: the given string
 *
 *
 * Return: void
 */

int _strlen(char *s)
{
	int count = 0;

	for (; *s != '\0'; s++)
	{
		count++;
	}
	return (count);
}
