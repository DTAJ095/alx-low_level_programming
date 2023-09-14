#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: program that prints the opcodes of its own main function
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: 1 or 2 on fail, 0 on success
 */

int main(int argc, char *argv[])
{
	int bytes, i;
	unsigned char *func_ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	func_ptr = (unsigned char *)main;
	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", func_ptr[i]);
			break;
		}
		printf("%02hhx ", func_ptr[i]);
	}

	return (0);
}
