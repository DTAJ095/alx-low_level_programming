#include "main.h"

/**
 * infinite_add - Adds two numbers
 * @n1: the first number
 * @n2: the second number
 * @r: the buffer that the function will use to store the result
 * @size_r: the size of the buffer
 * 
 * Return: Result
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, sum, start, d1, d2, carry = 0;

	while (*(n1 + i) != '\0')
	    i++;
	while (*(n2 + j) != '\0')
		j++;
	if (i >= j)
		start = i;
	else
		start = j;
	if (size_r <= start + 1)
		return (0);
	r[start + 1] = '\0';
	i--;
    	j--; 
    	size_r--;
	d1 = *(n1 + i) - '0';
    	d2 = *(n2 + j) - '0';
	while (start >= 0)
	{
		sum = d1 + d2 + carry;
		if (sum >= 10)
			carry = sum / 10;
		else
			carry = 0;
		if (sum > 0)
		    *(r + start) = (sum % 10) + '0';
		else
			*(r + start) = '0';
		if (i > 0)
       	 	{
			i--;
            		d1 = *(n1 + i) - '0';
       		}
		else
			d1 = 0;
		if (j > 0)
        	{
			j--;
            		d2 = *(n2 + j) - '0';
        	}	
		else
			d2 = 0;
		start--; 
        	size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
