#include "lists.h"

/**
 *add_nodeint -a function that adds a new node
 *at the beginning of a list_t list.
 *@n: integer
 *@head: a pointer to the beginning of a list_t list.
 *Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *x;

	x = malloc(sizeof(listint_t));
	if (x == NULL)
		return (NULL);

	x->n = n;
	x->next = *head;
	*head = x;

	return (x);
}
