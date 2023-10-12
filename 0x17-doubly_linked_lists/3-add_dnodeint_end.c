#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to head of list
 * @n: integer to store in node
 * Return: address of new element or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *test;

	test = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (test == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (test->next)
		test = test->next;
	new->prev = test;
	test->next = new;
	return (new);
}
