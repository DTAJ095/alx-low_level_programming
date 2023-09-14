#include "3-calc.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * op_add - adds two numbers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: Result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substracts two numbers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: Result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: Result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: Result
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - get the rest of the division of two numbers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: Result
 */

int op_mod(int a, int b)
{
	return (a % b);
}
