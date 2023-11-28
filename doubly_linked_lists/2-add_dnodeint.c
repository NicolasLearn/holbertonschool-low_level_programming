#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a "list_t list".
 * @head: adress of variable head.
 * @n: value of the node.
 *
 * Return: the address of the new element, or NULL if it failed.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_element;
	dlistint_t *head_temp = *head;

	new_element = malloc(sizeof(dlistint_t));
	if (new_element == NULL)
	{
		free(new_element);
		new_element = NULL;
	}
	else
	{
		if (*head == NULL)
			new_element->next = NULL;
		else
		{
			head_temp->prev = new_element;
			new_element->next = *head;
		}
		new_element->n = n;
		new_element->prev = NULL;
		*head = new_element;
	}
	return (new_element);
}
