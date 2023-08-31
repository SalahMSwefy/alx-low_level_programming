#include "main.h"

/**
 *flip_bits -a function that returns the number of bits
 *you would need to flip to get from one number to another.
 *@n: the frist number
 *@m: the second number
 *Return: the value of a bit at a given index
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	int cnt = 0;

	while (xor)
	{
		cnt += xor & 1;
		xor >>= 1;
	}

	return (cnt);
}
