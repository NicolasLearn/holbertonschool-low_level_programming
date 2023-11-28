#include "lists.h"

/**
 * sum_dlistint - returns sum of all the data (n) of "dlistint_t" linked list.
 * @head: pointer to the head of the list.
 *
 * Return: the sum of all the data (n) of "dlistint_t" linked list.
 * if the list is empty return 0.
*/
int sum_dlistint(dlistint_t *head)
{
	int result = 0;
	dlistint_t *head_buffer = head;

	while (head_buffer != NULL)
	{
		result += head_buffer->n;
		head_buffer = head_buffer->next;
	}
	return (result);
}
