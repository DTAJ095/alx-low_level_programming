#include<stdio.h>
#include "main.h"

/**
 * _isdigit - check if a character is a digit
 * @c: the character to be checked
 *
 * Return: 1 if it is a digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}


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
 * Description: program that adds positive numbers
 * @argc: argument count
 * @argv: array containing the command line arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int n, i = 0, sum;

	while (argc-- > 1)
	{
		for (; argv[argc][i]; i++)
		{
			if (!(_isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		n = _atoi(argv[argc]);
		sum += n;
	}
	printf("%d\n", sum);

	return (0);
}
