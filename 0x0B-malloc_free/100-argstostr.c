#include "main.h"
#include<stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: the array containig the command line arguments
 *
 * Return: pointer to a new string.
 */

char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, k = 0, len = 0;
	char *fin_str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (len = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}

	fin_str = malloc((len + 1) * sizeof(char));

	if (fin_str == NULL)
	{
		free(fin_str);
		return (NULL);
	}

	for (i = j = k = 0; k < len; j++, k++)
	{
		if (av[i][j] == '\0')
		{
			fin_str[k] = '\n';
			i++;
			k++;
			j = 0;
		}
		if (k < len - 1)
			fin_str[k] = av[i][j];
	}
	fin_str[k] = '\0';

	return (fin_str);
}
