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
 * add_node - adds a new node at the beginning of a "list_t list"
 * @head: descirption
 * @str: description
 *
 * Return: the address of the new element, or NULL if it failed.
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *element;

	element = malloc(sizeof(list_t));
	if (element == NULL)
	{
		free(element);
		element = NULL;
	}
	else
	{
		if (str == NULL)
		{
			element->str = NULL;
			element->len = 0;
		}
		else
		{
			element->str = strdup(str);
			element->len = _strlen(element->str);
		}
		element->next = *head;
		*head = element;
	}
	return (element);
}
