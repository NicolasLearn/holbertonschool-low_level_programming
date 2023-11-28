#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a list.
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
 * delete_dnodeint_at_index - deletes node at index of a list.
 * @head: adress of the variable head.
 * @index: index of the element at delete in the list. start to 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *head_temp = *head;
	unsigned int len_list = dlistint_len(*head);
	unsigned int current_index = 0;

	if ((*head == NULL) || (len_list <= index))
		return (-1);
	while (current_index != index)
	{
		current_index++;
		head_temp = head_temp->next;
	}
	if (index == 0)
	{
		if (len_list == 1)
			*head = NULL;
		else
		{
			head_temp->next->prev = NULL;
			*head = head_temp->next;
		}
	}
	else if (len_list == (index + 1))
	{
		head_temp->prev->next = NULL;
	}
	else
	{
		head_temp->next->prev = head_temp->prev;
		head_temp->prev->next = head_temp->next;
	}
	free(head_temp);
	head_temp = NULL;
	return (1);
}
