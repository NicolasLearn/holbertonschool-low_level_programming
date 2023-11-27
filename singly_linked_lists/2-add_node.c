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
 * @head: adress of variable head
 * @str: pointer to the string to be dupplicate
 *
 * Return: the address of the newElement, or NULL if it failed.
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newElement;

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
			newElement->str = NULL;
			newElement->len = 0;
		}
		else
		{
			newElement->str = strdup(str);
			newElement->len = _strlen(newElement->str);
		}
		newElement->next = *head;
		*head = newElement;
	}
	return (newElement);
}
