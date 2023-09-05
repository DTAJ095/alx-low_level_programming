#include "main.h"
#include<stdlib.h>

/**
 * *str_concat - function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: Pointer to the newly allocated memory space containing s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *fin_str, *str1, *str2, *ptr;
	int i = 0, lens1 = 0, lens2 = 0;

	str1 = s1;
	str2 = s2;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*s1)
	{
		lens1++;
		s1++;
	}
	s1 = str1;
	while (*s2)
	{
		lens2++;
		s2++;
	}
	s2 = str2;
	fin_str = malloc(sizeof(char) * (lens1 + lens2 + 1));
	ptr = fin_str;
	if (fin_str == NULL)
		return (NULL);
	for (; i < (lens1 + lens2); i++)
	{
		if (i < lens1)
		{
			fin_str[i] = *s1;
			s1++;
		}
		else
		{
			fin_str[i] = *s2;
			s2++;
		}
	}
	fin_str[i] = '\0';
	return (ptr);
}
