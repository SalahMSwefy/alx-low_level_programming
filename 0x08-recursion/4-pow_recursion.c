#include "main.h"

/**
 *_pow_recursion - a function that returns the value of x raised to the power of y.
 *@x: the input number
 *@y: the power number
 *Return: the value of x raised to the power of y or -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
	{
		return (1);
	}
	return (_pow_recursion(x, y - 1) * x);
}
