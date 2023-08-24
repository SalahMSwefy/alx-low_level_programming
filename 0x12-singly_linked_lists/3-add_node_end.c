#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_node_end -a function that adds a new node
 *at the end of a list_t list.
 *@str: string - to be duplicated
 *@head: a pointer to the beginning of a list_t list.
 *Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *s;
	size_t n = 0;
	list_t *x, *temp;

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
		n++;

	x->len = n;
	x->str = s;
	x->next = NULL;

	if (*head == NULL)
		*head = x;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = x;
	}

	return (*head);
}
