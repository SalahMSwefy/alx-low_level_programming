#include "main.h"

/**
 *set_bit - a function that sets the value of a bit to 1 at a given index.
 *@n: a number
 *@index: index of bit
 *Return: the value of a bit at a given index
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	i = (1 << index);
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n |= i;
	return (1);
}
