#include<stdio.h>
#include "main.h"
#include<stdlib.h>

/**
 * _atoi - Convert a string to an integer
 * @s: The string to convert
 *
 * Return: Nothing
 */

int _atoi(char *s)
{
	int len, i = 0, FLAG = 0, d = 0, n = 0, digit;

	for (len = 0; s[len] != '\0'; len++)
		;

	while (i < len && FLAG == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= 48 && s[i] <= 57)
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			FLAG = 1;
			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;
			FLAG = 0;
		}
		i++;
	}
	if (FLAG == 0)
		return (0);

	return (n);
}

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
	int num1, num2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		num1 = _atoi(argv[1]);
		num2 = _atoi(argv[2]);
		mul = num1 * num2;
		printf("%d\n", mul);
	}

	return (0);
}
