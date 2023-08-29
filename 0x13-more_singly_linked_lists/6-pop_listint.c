#include "lists.h"

/**
 *pop_listint - a function that deletes the head node of a listint_t
 *linked list,and returns the head node’s data (n).
 *@head: a pointer to the beginning of a listint_t list.
 *Return: nothing
 */

int pop_listint(listint_t **head)
{
	int x;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = (*head)->next;
	x = (*head)->n;
	free(*head);
	*head = temp;
	return (x);
}
