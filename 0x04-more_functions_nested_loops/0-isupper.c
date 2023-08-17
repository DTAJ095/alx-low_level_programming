#include "main.h"

/**
  * _isupper - check if a character is upper
  * @c: the character to be checked
  *
  * Return: 1 for upper and 0 otherwise
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);

}
