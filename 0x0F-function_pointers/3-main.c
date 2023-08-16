#include <stdlib.h>
#include <stdio.h>
#include "3-op_functions.h"

/**
 *main - main function
 *@argc: arguments
 *@argv: double pointer to arguments
 *Return:0
 */

int main(int argc, char *argv[])
{
	int a, b, res;
	int (*func)(int, int);
	char *oop;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	sign = argv[2];

	if (get_op_func(argv[2]) == NULL || argv[2][1] != 0)
	{
		printf("Error\n");
		exit(99);
	}

	if ((oop == '/' || oop == '%') && (argv[3] == 0))
	{
		printf("Error\n");
		exit(100);
	}

	func = get_op_func(oop);
	res = func(a, b);
	printf("%d\n", res);
	return (0);
}
