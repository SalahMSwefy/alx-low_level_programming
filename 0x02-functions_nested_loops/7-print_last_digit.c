#include "main.h"
/**
 *_print_last_digit - function that print the print last digit of integer
 *@n: is an integer
 *Return: return 0
 */
int print_last_digit(int n)
{
	int x = n % 10;

	if (x < 0)
	{
		x = x * -1;
	}

	_putchar(x + '0');
	return (x);
}
