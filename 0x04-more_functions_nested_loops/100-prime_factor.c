#include<stdio.h>
#include<math.h>

/**
 * main - Prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long x, maxf;
	long num = 612852475143;
	double sqr = sqrt(num);

	for (x = 1; x <= sqr; x++)
	{
		if (num % x == 0)
		{
			maxf = num / x;
		}
	}
	printf("%ld\n", maxf);

	return (0);
}
