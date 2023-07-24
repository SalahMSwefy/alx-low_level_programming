#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char temp;
	int i, j;

	i = 0;
	j = 0;

	while (s[i] != 0)
	{
		i++;
	}
	i--;
	while (i > j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i--;
		j++;
	}
}
