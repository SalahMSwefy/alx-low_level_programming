#include "main.h"

/**
 *factorial - a function that returns the factorial of a given number.
 *@n: number to know it factorial
 *Return: the factorial of a number or -1
 */

int factorial(int n)
{
    if (n < 0)
        return (-1);
    if (n == 0)
    {
        return (1);
    }
    return (factorial(n - 1) * n);
}
