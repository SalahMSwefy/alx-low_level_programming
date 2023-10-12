#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to head of list
 * @idx: index of the list where the new node should be added
 * @n: data for new node
 * Return: address of new node or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h, *new = malloc(sizeof(dlistint_t));
	unsigned int i = 0;

	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		if (*h == NULL)
		{
			new->next = NULL;
			new->prev = NULL;
			*h = new;
			return (new);
		}
		new->next = *h;
		new->prev = NULL;
		(*h)->prev = new;
		*h = new;
		return (new);
	}
	while (current)
	{
		if (i == idx - 1)
		{
			new->next = current->next;
			new->prev = current;
			if (current->next)
				current->next->prev = new;
			current->next = new;
			return (new);
		}
		current = current->next;
		i++;
	}
	return (NULL);
}
