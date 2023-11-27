#include "lists.h"

/**
 * list_len - returns the number of elements in a linked "list_t list".
 * @h: adress of the head value of the list.
 *
 * Return: number of elements in a linked "list_t list".
*/
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
