#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _isdigit - checks for digit
 * @c : character to check
 * Return:0 or 1
 */

int _isdigit(char *c)
{
	while (*c != '\0')
	{
		if (*c < '0' || *c > '9')
			return (1);
		c++;
	}
	return (0);
}

/**
 * _strlen - get the length of strings
 * @str: string to get length of
 *
 * Return: length of string
*/

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * _memset - fills memory with a constant byte
 * @s: input pointer that represents memory block to fill
 * @b: characters to fill/set
 * @n: number of bytes to be filled
 *
 * Return: pointer to the filled memory area
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

/**
 * _calloc - allocates memory for an array using memset function
 *
 * @nmemb: size of array
 * @size: size of each element
 *
 * Return: pointer to new allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);

	return (ptr);
}


/**
 * multiply - multiplies two arrays with 0 byte
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: nothing
*/

void multiply(char *s1, char *s2)
{
	int i, len1, len2, len, first_digit, second_digit, res = 0, tmp;
	char *ptr;
	void *temp;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	tmp = len2;
	len = len1 + len2;
	ptr = _calloc(sizeof(int), len);

	/* store our pointer address to free later */
	temp = ptr;

	for (len1--; len1 >= 0; len1--)
	{
		first_digit = s1[len1] - '0';
		res = 0;
		len2 = tmp;
		for (len2--; len2 >= 0; len2--)
		{
			second_digit = s2[len2] - '0';
			res += ptr[len2 + len1 + 1] + (first_digit * second_digit);
			ptr[len1 + len2 + 1] = res % 10;
			res /= 10;
		}
		if (res)
			ptr[len1 + len2 + 1] = res % 10;
	}

	while (*ptr == 0)
	{
		ptr++;
		len--;
	}

	for (i = 0; i < len; i++)
		printf("%i", ptr[i]);
	printf("\n");
	free(temp);
}


/**
 * main - Entry point
 *
 * Description: a program that multiplies two positive numbers
 * @argc: number of arguments
 * @argv: arguments array
 *
 * Return: 0 on success 98 on failure
*/

int main(int argc, char *argv[])
{
	char *num1 = argv[1];
	char *num2 = argv[2];

	if (argc != 3 || _isdigit(num1) || _isdigit(num2))
		exit(98);

	if (*num1 == '0' || *num2 == '0')
	{
		_putchar('0');
		_putchar('\n');
	}
	else
		multiply(num1, num2);
	return (0);
}
