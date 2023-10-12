#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to head of list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *test;

	while (head)
	{
		test = head;
		head = head->next;
		free(test);
	}
}
