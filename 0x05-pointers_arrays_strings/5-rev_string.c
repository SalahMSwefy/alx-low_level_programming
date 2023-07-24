#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *st)
{
	char temp;
	int i, j;

	i = 0;
	j = 0;

	while (st[i] != 0)
	{
		i++;
	}
	i--;
	while (i > j)
	{
		temp = st[i];
		st[i] = st[j];
		st[j] = temp;
		i--;
		j++;
	}
}
