#include "lists.h"

/**
 *delete_nodeint_at_index -a function that deletes the node at index index
 *of a listint_t linked list.
 *@index: the index of node
 *@head: a pointer to the beginning of a list_t list.
 *Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *pos = *head, *test;
	unsigned int i = index;

	i--;
	if (pos == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(pos);
		return (1);
	}

	while (i--)
	{
		if (pos == NULL || pos->next == NULL)
			return (-1);
		pos = pos->next;
	}

	test = pos->next;
	pos->next = test->next;

	free(test);
	return (1);
}
