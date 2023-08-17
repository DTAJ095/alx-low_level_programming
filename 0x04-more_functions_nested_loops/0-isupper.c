#include "main.h"

/**
 * isupper: Check description
 * Description: the function checks if a character
 * is uppercase or not
 * Return: 1 for upper and 0 for else
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
