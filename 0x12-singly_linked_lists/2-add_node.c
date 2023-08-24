#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_node -a function that adds a new node
 *at the beginning of a list_t list.
 *@str: string - to be duplicated
 *@head: a pointer to the beginning of a list_t list.
 *Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	char *s;
	size_t n = 0;
	list_t *x;

	x = malloc(sizeof(list_t));
	if (x == NULL)
		return (NULL);

	s = strdup(str);

	if (s == NULL)
	{
		free(x);
		return (NULL);
	}

	while (s[n] != 0)
	{
		n++;
	}

	x->len = n;
	x->str = s;
	x->next = *head;
	*head = x;

	return (x);
}
