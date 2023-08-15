#include "main.h"

/**
 * print_alphabet_x10 - Check main.h
 * Description: use the _putchar function to print the alphabet 
 * lower case 10 times
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
