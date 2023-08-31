#include "main.h"

/**
 *clear_bit - a function that sets the value of a bit to 0 at a given index.
 *@n: a number
 *@index: index of bit
 *Return: the value of a bit at a given index
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	i = ~(1 << index);
	*n &= i;
	return (1);
}
