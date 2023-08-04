#include "main.h"

int _prime(int n, int i);

/**
 *_pow_recursion - a function that returns 1 if the input integer is
 *a prime number, otherwise return 0.
 *@n: the input number
 *Return: 1 if the input integer is a prime number, otherwise return 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, n - 1));
}

/**
 *_prime - a function that returns if a number is prime
 *@n: the input number
 *@i: iterator
 *Return: 1 if the input integer is a prime number, otherwise return 0.
 */

int _prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (i > 0 && n % i == 0)
	{
		return (0);
	}
	return (_prime(n, i - 1));
}
