#include <stdio.h>

/**
 * FibonacciNumbers: check Description
 * Description: it prints the firts fibonacci numbers of 
 * a given number
 */
void FibonacciNumbers(int n)
{
    int N = 0, M = 1, i, next;
    if (n < 1)
    {
        return;
    }
    printf("%d"",", N);

    for (i = 1; i < n; i++)
    {
        printf("%d"","" ", M);
        next = N + M;
        N = M;
        M = next;
    }
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * */
int main()
{
    FibonacciNumbers(50);
    printf("\n");

    return 0;
}
