#include <stdlib.h>
#include <stdio.h>

/**
 *main - main function
 *This is a program that prints the opcodes of its own main function.
 *@argc: number of arguments
 *@argv: a pointer to arguments (number of bytes)
 *Return:0
 */

int main(int argc, char *argv[])
{
	int i, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);
	if (bytes <= 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes; i++)
	{
		printf("%02hhx", *((char *) main + i));
		if (i == bytes - 1)
			printf("\n");
		else
			printf(" ");
	}

	return (0);
}
