#include "3-calc.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * main - Entry point
 * Description: program that perform the operation asked by the user
 * @argc: arguments count
 * @argv: the array containing the command line arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	
	int num1, num2;
	char op;
	int (*func)(int, int);
	
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op = *argv[2];
	num2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((op == '/' && num2 == 0) || (op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", func(num1, num2));

	return (0);
}

