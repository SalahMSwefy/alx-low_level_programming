#include "main.h"
#include <stdlib.h>

/**
 **_strcat -a function that concatenates two strings.
 *@dest: is a string
 *@src: is a string
 *Return:return string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != 0)
	{
		i++;
	}

	while (src[j] != 0)
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	return (dest);
}

/**
 *_strlen -a function that return the length of a string.
 *@s: is a string
 *Return: return
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		i++;
	}

	return (i);
}

/**
 **argstostr - a function that concatenates all the arguments of your program.
 *@ac:  is argc
 *@av: is argv
 *Return:return a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, size;
	char *s = "";

	if (ac == 0 || av == NULL)
		return (0);

	for (i = 0; i < ac && av[i] != NULL; i++)
	{
		size += _strlen(av[i]) + 1;
	}

	s = malloc(sizeof(char) * size);
	f
	for (i = 0; i < ac && av[i] != NULL; i++)
	{
		s = _strcat(s, av[i]);
		s = _strcat(s, "\n");
	}

	if (s == NULL)
		return (0);

	return (s);
}
