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
    int len = 0, i,j, carry = 0, sum = 0;

    for (i = n1[len] - 1; i >= 0; i--)
    {
        sum += carry;
        for (j = n2[len]; j >= 0; j--)
        {
            sum += (n1[i] - '0') + (n2[j] - '0') + carry;
        }
        carry = sum / 10;
        r[i + 1] = sum % 10 + '0';
    }

    if (r[len] <= size_r)
    {
        return (r);
    }
    else
    {
        return (0);
    }
}
