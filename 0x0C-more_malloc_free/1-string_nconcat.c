#include "main.h"
#include<stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the first bytes of s2 to concatenate
 *
 * Return: pointer to the new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, len1 = 0, len2 = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n > len2)
		n = len2;
	ptr = malloc((len1 + n + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	for (; i < (len1 + n); i++)
	{
		ptr[i] = s2[i - len1];
	}
	ptr[i] = '\0';
	return (ptr);

}
