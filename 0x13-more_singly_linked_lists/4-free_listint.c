#include "lists.h"

/**
 *free_listint - a function that frees a listint_t list.
 *@head: a pointer to the beginning of a listint_t list.
 *Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
