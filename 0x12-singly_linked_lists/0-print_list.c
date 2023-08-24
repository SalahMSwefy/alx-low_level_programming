#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *print_list - function that prints all
 *the elements of a list_t list.
 *@h: list_t - to print it
 *Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *start = h;
	size_t cnt = 0;

	while (start != NULL)
	{
		if (start->str != NULL)
			printf("[%d] %s\n", start->len, start->str);
		else
			printf("[0] (nil)\n");
		cnt++;
		start = start->next;
	}

	return (cnt);
}
