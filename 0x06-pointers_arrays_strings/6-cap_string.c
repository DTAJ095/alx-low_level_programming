#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @st: the given string
 *
 * Return: void
 */

char *cap_string(char *st)
{
	int len, i;
	char sep[13] = {' ', '\t', '\n', ',', ';', '.', '!',
		'?', '"', '(', ')', '{', '}'};

	for (len = 0; st[len] != '\0'; len++)
	{
		if ((len == 0) && (st[len] >= 97) && (st[len] <= 122))
		{
			st[len] -= 32;
		}

		for (i = 0; i < 13; i++)
		{
			if (st[len] == sep[i])
			{
				if ((st[len + 1] >= 97) && (st[len + 1] <= 122))
				{
					st[len + 1] -= 32;
				}
			}
		}
	}
	return (st);
}
