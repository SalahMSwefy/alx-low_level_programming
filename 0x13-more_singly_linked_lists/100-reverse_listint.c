#include "lists.h"

/**
 *reverse_listint -a function that reverses a listint_t linked list.
 *@head: a pointer to the beginning of a listint_t list.
 *Return: a pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	int x;
	listint_t *curnt, *prev = NULL;

	if (*head == NULL || head == NULL)
		return (NULL);

	while ((*head)->next != NULL)
	{
		curnt = (*head)->next;
		(*head)->next = prev;
		prev = head;
		*head = curnt;
	}

	(*head)->next = prev;
	return (*head);
}
