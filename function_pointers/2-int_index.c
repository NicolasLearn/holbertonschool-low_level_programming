#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - search a specific integer in array with function pointer
 * @array: array to be check
 * @size: size to the array
 * @cmp: function pointer
 *
 * Return: index of the first element matched with search
 *	-1 if : size <= 0, no match or if one arg is NULL
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if ((array == NULL) || (cmp == NULL) || (size <= 0))
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) == 1)
			return (i);
	}
	return (-1);
}
