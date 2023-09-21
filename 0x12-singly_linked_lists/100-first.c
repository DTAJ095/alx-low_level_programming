#include<stdio.h>

/* Constructor in c */
void main_constructor(void)__attribute__((constructor));

/**
 * main_constructor - a function that prints a message before
 * the main function runs
 *
 * Return: Nothing
 */

void main_constructor(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
