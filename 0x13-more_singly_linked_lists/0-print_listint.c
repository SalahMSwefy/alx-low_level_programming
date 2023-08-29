#include "lists.h"


/**
 *print_listint - function that prints all
 *the elements of a listint_t list.
 *@h: listint_t - to print it
 *Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *start = h;
	size_t cnt = 0;

	while (start != NULL)
	{
		printf("%d\n", start->n);
		cnt++;
		start = start->next;
	}
	return (cnt);
}
