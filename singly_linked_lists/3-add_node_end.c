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
 * @head: description
 * @str: description
 *
 * Return: the address of the new newElement, or NULL if it failed.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newElement;
	list_t *bufferElement = *head;

	newElement = malloc(sizeof(list_t));
	if (newElement == NULL)
	{
		free(newElement);
		newElement = NULL;
	}
	else
	{
		if (str == NULL)
		{
			newElement->str = "(nil)";
			newElement->len = 0;
		}
		else
		{
			newElement->str = strdup(str);
			newElement->len = _strlen(newElement->str);
		}
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