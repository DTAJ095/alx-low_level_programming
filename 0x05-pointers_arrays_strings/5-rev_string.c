#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: the string to be reversed
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int i = 0, j, right;

	while (s[i] != '\0')
	{
		i++;
	}

	j = i / 2;
	right = 0;

	while (right != j)
	{
		char tmp = s[right];
		int left = i - right - 1;

		s[right] = s[left];
		s[left] = tmp;

		right++;
	}
}
