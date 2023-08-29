#include "lists.h"

/**
 *add_nodeint_end -a function that adds a new node
 *at the end of a listint_t list.
 *@n: integer
 *@head: a pointer to the beginning of a list_t list.
 *Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *x, *temp;

	x = malloc(sizeof(listint_t));
	if (x == NULL)
		return (NULL);

	x->n = n;
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
