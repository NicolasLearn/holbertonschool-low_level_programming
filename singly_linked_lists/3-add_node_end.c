#include "lists.h"

/**
 * _strlen - count the number of character enter in param
 * @s: string to be checked
 *
 * Return: return the number of character of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/*---------------------------------------------------------------------------*/

/**
 * add_node_end - adds a new node at the end of a "list_t list"
 * @head: adress of variable head
 * @str: pointer to the string to be dupplicate
 *
 * Return: the address of the new newElement, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newElement;
	list_t *bufferElement = *head;

	newElement = malloc(sizeof(list_t));
	if ((newElement == NULL) || (str == NULL))
	{
		free(newElement);
		newElement = NULL;
	}
	else
	{
		newElement->str = strdup(str);
		if (newElement->str == NULL)
		{
			free(newElement->str);
			free(newElement);
			newElement = NULL;
			return (newElement);
		}
		newElement->len = _strlen(newElement->str);
		if (*head == NULL)
			*head = newElement;
		newElement->next = NULL;
		while (bufferElement != NULL)
		{
			if (bufferElement->next == NULL)
			{
				bufferElement->next = newElement;
				break;
			}
			bufferElement = bufferElement->next;
		}
	}
	return (newElement);
}
