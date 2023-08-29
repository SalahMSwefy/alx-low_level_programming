#include "lists.h"

/**
 *get_nodeint_at_index - a function that returns the nth node of
 *a listint_t linked list.
 *@head: a pointer to the beginning of a listint_t list.
 *@index: the index of node
 *Return: nothing
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;

	if (head == NULL)
		return (NULL);
	while (index--)
	{
		temp = temp->next;
	}

	return (temp);
}
