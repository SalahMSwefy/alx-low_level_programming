#include "main.h"

/**
 *get_bit -  a function that returns the value of a bit at a given index.
 *@n: a number
 *@index: index of bit
 *Return: the value of a bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((n >> index) & 1);
}
