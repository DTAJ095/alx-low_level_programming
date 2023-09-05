#include "main.h"
#include<stdlib.h>

/**
 * _strdup - function tha returns a pointer to a newly allocated
 * space in a memory which contains a copy of the string given
 * as a parameter
 * @str: the given string
 *
 * Return: Null if str is NULL or a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *new_str, *ptr;
	int i = 0, len = 0;

	if (str == NULL)
		return (NULL);
	ptr = str;
	while (*str)
	{
		len++;
		str++;
	}
	str = ptr;
	new_str = malloc(sizeof(char) * (len + 1));
	ptr = new_str;

	if (new_str != NULL)
	{
		for (; i < len; i++)
		{
			new_str[i] = *str;
			str++;
		}
		new_str[i] = '\0';
		return (ptr);
	}
	else
		return (NULL);
}
