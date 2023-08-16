#include <stdio.h>
#define LARGEST 10000000000
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int fw1 = 0, bw1 = 1, fw2 = 0, bw2 = 2;
	unsigned long int half1, half2, half3;
	int i;

	printf("%lu, %lu, ", bw1, bw2);
	for (i = 2; i < 98; i++)
	{
		if (bw1 + bw2 > LARGEST || fw2 > 0 || fw1 > 0)
		{
			half1 = (bw1 + bw2) / LARGEST;
			half2 = (bw1 + bw2) % LARGEST;
			half3 = fw1 + fw2 + half1;
			fw1 = fw2, fw2 = half3;
			bw1 = bw2, bw2 = half2;
			printf("%lu%010lu", fw2, bw2);
		}
		else
		{
			half2 = bw1 + bw2;
			bw1 = bw2, bw2 = half2;
			printf("%lu", bw2);
		}
		if (i != 97)
			printf(", ");
	}
	printf("\n");

	return (0);
}
