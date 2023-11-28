#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked "list_t list".
 * @h: adress of the head value of the list.
 *
 * Return: number of elements in a linked "list_t list".
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

/*---------------------------------------------------------------------------*/

/**
 * get_dnodeint_at_index - returns the nth node of a "dlistint_t linked list".
 * @head: pointer the head of the list.
 * @index: index of the searched node, starting from 0.
 *
 * Return: the node if success. If the node does not exist, return NULL.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *buffer_element = head;
	unsigned int len_list = dlistint_len(head);
	unsigned int current_index = 0;

	if ((head == NULL) || (len_list <= index))
		return (NULL);
	while (buffer_element != NULL)
	{
		if (current_index == index)
			break;
		buffer_element = buffer_element->next;
		current_index++;
	}
	return (buffer_element);
}
