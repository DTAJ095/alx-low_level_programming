#include<stdio.h>

/**
 * main - Entry point
 * Description: program that prints its name
 * @argc: argument count
 * @argv: array containing the command line arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
