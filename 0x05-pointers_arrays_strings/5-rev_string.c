#include "main.h"

/**
 *rev_string -a function that reverses a string.
 *@s: is a string
 *Return: no return
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;

	while (s[i] != 0)
	{
		i++;
	}

	while (i > j)
	{
		int temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
