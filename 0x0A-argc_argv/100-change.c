#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
    int money, res = 0;

    if (argc != 2)
    {
        printf("Error\n");
        return (1);
    }

    money = atoi(argv[1]);
    if (money < 0)
    {
        printf("0\n");
        return (0);
    }
    res += money / 25;
    money %= 25;
    res += money / 10;
    money %= 10;
    res += money / 5;
    money %= 5;
    res += money / 2;
    money %= 2;
    res += money / 1;
    money %= 1;
    printf("%d\n", res);
    return (0);
}
