#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int n, x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	
	if (x > 5 && x != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, x);
	else if (x < 5 && x != 0)
		printf("Last digit of %d is %d and is greater than 5", n, x);
	else
		printf("Last digit of %d is 0 and is 0", n);
	return (0);
}
