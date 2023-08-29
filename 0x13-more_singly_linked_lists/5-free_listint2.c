#include "lists.h"

/**
 *pop_listint - a function that frees a listint_t list.
 *@head: a pointer to the beginning of a listint_t list.
 *Return: nothing
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	head = NULL;
}
