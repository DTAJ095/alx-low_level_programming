#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: an unsigned long integer
 * @m: an unsigned long integer
 *
 * Return: Number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = (n ^ m), nbits = 0;

	while (xor)
	{
		nbits += (xor & 1);
		xor >>= 1;
	}
	return (nbits);
}
