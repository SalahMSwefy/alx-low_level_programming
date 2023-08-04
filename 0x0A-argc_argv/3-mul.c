#include <stdio.h>
/**
 * main - that multiplies two numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
    int i, mal = 1;
    if (argc == 3)
    {
        for (i = 1; i < argc; i++)
            mal *= atoi(argv[i]);
        printf("%d\n", mal);
    }
    else
    {
        printf("Error\n");
        return (1);
    }

    return (0);
}
