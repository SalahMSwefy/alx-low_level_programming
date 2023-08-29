#include "lists.h"

/**
 *pop_listint - a function that frees a listint_t list.
 *@head: a pointer to the beginning of a listint_t list.
 *Return: nothing
 */

int pop_listint(listint_t **head)
{
	int x;
	listint_t * temp;

	if (head == NULL)
		return (0);

	temp = (*head)->next;
	x = (*head)->n;
	free(*head);
	*head = temp;
	return (x);
}