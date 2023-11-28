#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the beginning of a "list_t list".
 * @head: adress of variable head.
 * @n: value of the node.
 *
 * Return: the address of the new element, or NULL if it failed.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_element;
	dlistint_t *buffer_element = *head;

	new_element = malloc(sizeof(dlistint_t));
	if (new_element == NULL)
	{
		free(new_element);
		new_element = NULL;
	}
	else
	{
		if (*head == NULL)
		{
			new_element->prev = NULL;
			*head = new_element;
		}
		else
		{
			while (buffer_element != NULL)
			{
				if (buffer_element->next == NULL)
				{
					buffer_element->next = new_element;
					new_element->prev = buffer_element;
					break;
				}
				buffer_element = buffer_element->next;
			}
		}
		new_element->n = n;
		new_element->next = NULL;
	}
	return (new_element);
}
