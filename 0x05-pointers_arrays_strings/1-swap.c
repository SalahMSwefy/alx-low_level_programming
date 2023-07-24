#include "main.h"

/**
 *swap_int -a function that swap the value
 *of two integers to to 98.
 *@a: integer
 *@b: integer
 *Return: return nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
