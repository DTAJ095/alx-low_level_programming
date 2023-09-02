#include<stdio.h>
#include "main.h"
#include "100-atoi.c"

/**
 * main - Entry point
 * Description: program that multiplies two numbers
 * @argc: argument count
 * @argv: array containing the command lines arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int n1, n2, res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n1 = _atoi(argv[1]);
		n2 = _atoi(argv[2]);
		res = n1 * n2;
		printf("%d\n", res);
	}

	return (0);
}
