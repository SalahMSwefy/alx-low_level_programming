#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *list_len -a function that returns the number
 *of elements in a linked list_t list.
 *@h: list_t - to print it
 *Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		cnt++;
		h = h->next;
	}

	return (cnt);
}
