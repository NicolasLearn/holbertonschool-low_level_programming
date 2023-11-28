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
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: adress of pointer head.
 * @idx: index of the list to insert the new node. Start to 0.
 * @n: value of the new node
 *
 * Return: the address of the new node, or NULL if it failed.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *head_temp = *h;
	dlistint_t *new_element;
	unsigned int len_list = dlistint_len(*h);
	unsigned int current_index = 0;

	new_element = malloc(sizeof(dlistint_t));
	if ((*h == NULL) || (len_list <= idx) || (new_element == NULL))
	{
		free(new_element);
		new_element = NULL;
	}
	else
	{
		while (current_index != idx)
		{
			current_index++;
			head_temp = head_temp->next;
		}
		new_element->n = n;
		head_temp->prev->next = new_element;
		new_element->prev = head_temp->prev;
		head_temp->prev = new_element;
		new_element->next = head_temp;
	}
	return (new_element);
}
