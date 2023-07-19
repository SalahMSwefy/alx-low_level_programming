#include "main.h"
/**
 *_print_last_digit- print the print last digit of n
 *@n: is an integer
 *Return: return 0
 */
int print_last_digit(int n)
{
	if (n >= 0)
	{
		return (n%10);
	}
	else 
	{
		return (-n%10);
	}
	
}
