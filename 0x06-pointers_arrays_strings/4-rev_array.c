#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 *@a: array to be reversed
 *@n: the number of integers in the array
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int i, len1 = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[len1];
		a[len1--] = tmp;
	}
}
