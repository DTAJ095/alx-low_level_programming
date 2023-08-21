#include "main.h"

/**
 * puts2 - Prints every each character of a string starting from the first character
 * @str: The string to input
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		if(i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
