#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 * @format: list of types of arguments passed to the function
 *
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	int i, check_status, j;
	char *string;
	const char total_arg[] = "ifcs";
	va_list vlist;

	va_start(vlist, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (total_arg[j])
		{
			if (format[i] == total_arg[j] && check_status == 0)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(vlist, const int)), check_status = 0;
				break;
			case 'f':
				printf("%f", va_arg(vlist, double)), check_status = 0;
				break;
			case 'c':
				printf("%c", va_arg(vlist, const int)), check_status = 0;
				break;
			case 's':
				string = va_arg(vlist, char *);
				if (string == NULL)
					string = "(nil)";
				printf("%s", string);
				break;
		} i++;
	}
	printf("\n");
	va_end(vlist);
}
