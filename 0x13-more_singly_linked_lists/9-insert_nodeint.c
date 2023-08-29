#include "lists.h"

/**
 *insert_nodeint_at_index -a function that inserts
 *a new node at a given position.
 *@n: integer
 *@idx: the index of node
 *@head: a pointer to the beginning of a list_t list.
 *Return: the address of the new element, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *x, *pos = *head;
	unsigned int i = idx;

	i--;
	x = malloc(sizeof(listint_t));
	if (x == NULL)
		return (NULL);
	x->n = n;
	if (idx == 0)
	{
		x->next = pos;
		*head = x;
		return (x);
	}

	while (i--)
	{
		if (pos == NULL || pos->next == NULL)
			return (NULL);
		pos = pos->next;
	}

	x->next = pos->next;
	pos->next = x;

	return (x);
}
