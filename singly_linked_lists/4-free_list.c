#include "lists.h"

/**
 * free_list - frees a "list_t list" with recursion.
 * @head: pointer to the head of the list
 */
void free_list(list_t *head)
{
	list_t *nextElement;

	if (head == NULL)
	{
		free(head);
		head = NULL;
		return;
	}
	nextElement = head->next;
	free(head->str);
	free(head);
	head = NULL;
	free_list(nextElement);
}
