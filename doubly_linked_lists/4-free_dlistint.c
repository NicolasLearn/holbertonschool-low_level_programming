#include "lists.h"

/**
 * free_dlistint - frees a "list_t list".
 * @head: pointer to the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *nextElement = head;

	while (nextElement != NULL)
	{
		nextElement = head->next;
		free(head);
		head = nextElement;
	}
	head = NULL;
}
