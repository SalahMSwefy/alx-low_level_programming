#include "lists.h"

/**
 *sum_listint -  a function that returns the sum of all
 *the data (n) of a listint_t linked list.
 *@head: a pointer to the beginning of a listint_t list.
 *Return: nothing
 */

int sum_listint(listint_t *head)
{
	unsigned int x = 0;
	listint_t *temp = head;

	while (temp)
	{
		x += temp->n;
		temp = temp->next;
	}

	return (x);
}
