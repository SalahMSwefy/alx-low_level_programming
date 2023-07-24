#include "main.h"

/**
 *rev_string -a function that reverses a string.
 *@s: is a string
 *Return: no return
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

