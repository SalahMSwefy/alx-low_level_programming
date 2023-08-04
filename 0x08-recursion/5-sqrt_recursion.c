#include "main.h"

/**
 *_pow_recursion - a function that returns the natural square root of a number.
 *@n: the input number
 *Return: the natural square root of a number or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}
int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (n == i * i)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}
