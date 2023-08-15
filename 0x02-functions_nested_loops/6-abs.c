#include "main.h"

/**
 *_abs - Check main.h
 * @n: An integre input
 * Description: This function returns absolute value of a number
 * Return: Absolute value of number n
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
