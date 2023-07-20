#include "main.h"

/**
 *print_number -  function that prints a number
 *@n: is an integer
 *Return: retrun nothing
 */

void print_number(int n)
{

	while (n)
	{
		_putchar(n % 10 - '0');
		n /= 10;
	}
	_putchar('\n');
}
