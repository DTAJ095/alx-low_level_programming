#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @st: the given string
 *
 * Return: void
 */

char *leet(char *st)
{
	int i = 0, j;
	char *str = "aAeEoOtTlL",
	     *subs = "4433007711";

	while (st[i])
	{
		for (j = 0; j < 10; j++)
		{
			if (st[i] == str[j])
			{
				st[i] = subs[j];
			}
		}

		i++;
	}

	return (st);
}
