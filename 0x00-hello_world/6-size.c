#include<stdio.h>
/**
 * main - Entry point
 *
 * Return : Always 0 (Success)
 */

int main(void)
{
	int i;
	long int I;
	long long int Li;
	char C;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(C));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(I));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(Li));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
