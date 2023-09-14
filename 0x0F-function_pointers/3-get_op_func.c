#include "3-calc.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/**
 * get_op_func - function that selects the correct function to perform
 * the operation asked by the user
 * @s: the operator passed as argument
 *
 * Return: pointer to the function that correspond to the operator
 * given as parameter
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
