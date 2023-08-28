#include "main.h"

/**
 * _strspn - gets the lenght of a prefix substring
 * @s: the string
 * @accept: the accepted prefix
 *
 * Return: The number of byte in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, nb = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (j = 0; accept[j] > '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				nb++;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
	}

	return (nb);
}
