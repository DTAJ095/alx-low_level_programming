#include<stdio.h>
#include "main.h"

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
 * Description: program that prints the minimum number of coins
 * to make change for an amount of money
 * @argc: argument count
 * @argv: array containing the command lines arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int amount, coins = 0;

	if (argc == 2)
	{
		amount = _atoi(argv[1]);
		if (amount < 0)
		{
			printf("%d\n", 0);
			return (0);
		}
		if (amount % 25 >= 0)
		{
			coins += amount / 25;
			amount = amount % 25;
		}
		if (amount % 10 >= 0)
		{
			coins += amount / 10;
			amount = amount % 10;
		}
		if (amount % 5 >= 0)
		{
			coins += amount / 5;
			amount = amount % 5;
		}
		if (amount % 2 >= 0)
		{
			coins += amount / 2;
			amount = amount % 2;
		}
		if (amount % 1 >= 0)
			coins += amount;
		printf("%d\n", coins);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
