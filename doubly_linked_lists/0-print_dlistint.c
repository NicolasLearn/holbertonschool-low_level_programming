#include "lists.h"

/**
 * print_dlistint -  prints all the elements of the "dlistint_t list".
 * @h: adress of the head value of the list
 *
 * Return: the number of nodes.
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t nbr_element = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nbr_element++;
		h = h->next;
	}
	return (nbr_element);
}
