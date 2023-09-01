#include<stdio.h>

/**
 * main - Entry point
 * Description: program that prints all the arguments it receives
 * @argc: argument count
 * @argv: array containing the command lines arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
